#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

class SparseMatrix{
	int **Matptr;
	int row, col, len, cap;

	public:
		SparseMatrix(int z){
			len =  0, cap = z;
	        Matptr = new int *[cap];
	        for (int i = 0; i < cap; i++)
	            Matptr[i] = new int[3];
    	}
		void insert(int r, int c, int val){
            Matptr[len][0] = r;
            Matptr[len][1] = c;
            Matptr[len][2] = val;
            len++;
   		}
		void initialise(){
			cout<<"****Enter sparse matrix**** ";
			cout<<"\nEnter number of rows and columns : ";
			int r, c; cin>>r>>c;
			row = r, col = c;
			int cnt = 0;
			insert(r, c, 0);
			cout<<"\nEnter  Sparse matrix (row elements separated by space, columns separated by newline) :\n";
			for(int i=1; i<=row; i++){
				for(int j = 1; j <= col; j++){
					int x; cin>>x;
					if(x)
						insert(i, j, x), ++cnt;
				}
			}
			Matptr[0][2] = cnt;
		}
		void print(){
			cout<<"****Array Representation of Sparse Matrix****\n";
			cout<<"ROWS "<<"COLUMNS "<<"NON-ZERO-ELEMENTS\n";
			cout<<setw(2)<<Matptr[0][0]<<setw(7)<<Matptr[0][1]<<setw(10)<<Matptr[0][2]<<"\n";
			cout<<" ROW "<<" COLUMN "<<"   VALUE\n";
			for(int i=1; i<len; i++){
				cout<<setw(2)<<Matptr[i][0]<<setw(7)<<Matptr[i][1]<<setw(10)<<Matptr[i][2]<<"\n";
			}
		}
		void normal_transpose(){
			SparseMatrix res(100);
			res.insert(col, row, Matptr[0][2]);

			for(int i = 1; i<=col; i++){
				for(int j=1; j<=Matptr[0][2]; j++){
					if(i == Matptr[j][1])
						res.insert(Matptr[j][1], Matptr[j][0], Matptr[j][2]);
				}
			}
			cout<<"transpose is : (By normal transpose approach)\n";
			res.print();
		}
		SparseMatrix Fast_transpose(){
			SparseMatrix res(100);
			res.insert(col, row, Matptr[0][2]);
			for(int i=0; i<Matptr[0][2]; i++) res.insert(0, 0, 0);
			int count[col+5] = {}, cnt = 0;

			for(int i=1; i<=Matptr[0][2]; i++)
				count[Matptr[i][1]]++;

			for(int i=1; i<=col; i++){
				int t = cnt;
				cnt += count[i];
				count[i] = t;
			}
			for(int i=1; i<=Matptr[0][2]; i++){
				int curCol = Matptr[i][1];
				int x = count[curCol];
				res.Matptr[x+1][0] = Matptr[i][1];
				res.Matptr[x+1][1] = Matptr[i][0];
				res.Matptr[x+1][2] = Matptr[i][2];
				count[curCol]++;
			}
			return res;
		}
        void addition(SparseMatrix b){
        	SparseMatrix res(100);
			res.insert(row, col, 0);
			int cnt = 0;
		 	if( row != b.row || col != b.col){
		 		cout<<"Addition not possible"; return;
			}
			int pt1 = 1, pt2 = 1;
			while(pt1 <= Matptr[0][2] && pt2 <= b.Matptr[0][2]){
				if(Matptr[pt1][0] < b.Matptr[pt2][0])
                    {

					res.insert(Matptr[pt1][0], Matptr[pt1][1], Matptr[pt1][2]);
					++pt1; ++cnt;
					}
					else if(Matptr[pt1][0] > b.Matptr[pt2][0]){

					res.insert(b.Matptr[pt2][0], b.Matptr[pt2][1], b.Matptr[pt2][2]);
					++pt2; ++cnt;

				    }
				    else{
					if(Matptr[pt1][1] < b.Matptr[pt2][1])
                        {

						res.insert(Matptr[pt1][0], Matptr[pt1][1], Matptr[pt1][2]);
						++pt1; ++cnt;
						}
                    else if(Matptr[pt1][1] > b.Matptr[pt2][1])
                        {

                        res.insert(b.Matptr[pt2][0], b.Matptr[pt2][1], b.Matptr[pt2][2]);
						++pt2; ++cnt;
					}
					else{

						res.insert(Matptr[pt1][0], Matptr[pt1][1], Matptr[pt1][2] + b.Matptr[pt2][2]); ++cnt;
						++pt1, ++pt2;
					}
				}
			}

			while (pt1 <= Matptr[0][2])
                res.insert(Matptr[pt1][0], Matptr[pt1][1], Matptr[pt1][2]), ++cnt, ++pt1;

            while (pt2 <= b.Matptr[0][2])
                res.insert(b.Matptr[pt2][0], b.Matptr[pt2][1], b.Matptr[pt2][2]), ++cnt, ++pt2;
            res.Matptr[0][2] = cnt;
            cout<<"****Addition of given sparse matrix****\n";
            res.print();
		}
		void multiplication(SparseMatrix b){

			if (col != b.row){
	            cout << "Cannot multiply";
	            return;
	        }

	        b = b.Fast_transpose();
	        int apt, bpt;                                                                    //Made by: Arjun, 3210

	        SparseMatrix res(100);
	  		res.insert(row, b.Matptr[0][0], 0);

	        for (apt = 1; apt <= len;)
	        {

	            int r = Matptr[apt][0];

	            for (bpt = 1; bpt <= b.len;)
	            {

	                int c = b.Matptr[bpt][0];

	                int tempa = apt;
	                int tempb = bpt;

	                int sum = 0;

	                while (tempa <= len && Matptr[tempa][0] == r &&
	                       tempb <= b.len && b.Matptr[tempb][0] == c)
	                {
	                    if (Matptr[tempa][1] < b.Matptr[tempb][1])
	                        tempa++;

	                    else if (Matptr[tempa][1] > b.Matptr[tempb][1])
	                        tempb++;
	                    else
	                        sum += Matptr[tempa++][2] * b.Matptr[tempb++][2];
	                }
	                if (sum != 0)
	                    res.insert(r, c, sum);

	                while (bpt <= b.len &&
	                       b.Matptr[bpt][0] == c)
	                    bpt++;
	            }
	            while (apt <= len && Matptr[apt][0] == r)
	                apt++;
	        }
	        res.Matptr[0][2] = res.len-1;
	        cout<<"****Multiplication of given sparse matrix is****\n";
	        res.print();
		}
};

int main(){
	SparseMatrix a(100), b(100), c(100), d(100);
	char sel = 'y';
	while(sel=='y')
    {
        cout<<"\n############SPARSE MATRIX MENU BY ARJUN#############\n";
        cout<<"\n1. ENTER MATRIX 1:\n";
        cout<<"2. ENTER MATRIX 2:\n";
        cout<<"3. DISPLAY MATRICES:\n";
        cout<<"4. ADD MATRICES:\n";
        cout<<"5. MULTIPLY MATRICES:\n";
        cout<<"6. NORMAL TRANSPOSE:\n";
        cout<<"7. FAST TRANSPOSE:\n";
        cout<<"8. EXIT:\n";
        cout<<"\n ENTER CHOICE: ";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:{a.initialise();}
            break;
            case 2:{b.initialise();}
            break;
            case 3:{a.print();cout<<"\n";b.print();}
            break;
            case 4:{a.addition(b);}
            break;
            case 5:{a.multiplication(b);}
            break;
            case 6:{cout<<"For A, ";a.normal_transpose();cout<<"\n";cout<<"For B, ";b.normal_transpose();}
            break;
            case 7:{cout<<"\nTranspose of A is : (By fast transpose approach)\n";c = a.Fast_transpose();c.print();cout<<"\nTranspose of B is : (By fast transpose approach)\n";d = b.Fast_transpose();d.print();}
            break;
            case 8:{exit(0);}
            break;
            default:{cout<<"\nInvalid choice.";}
        }
        cout<<"\nEnter again?(y/n) ";
        cin>>sel;
    }

}
