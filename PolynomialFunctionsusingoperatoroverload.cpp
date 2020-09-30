#include<bits/stdc++.h>
using namespace std;

class polynomial
{
int sizeterms;
int *coeff;
int *exp;
public:
polynomial(int sizeterms)
{
    this->sizeterms = sizeterms;
    coeff= new int[sizeterms];
    exp =new int[sizeterms];
}
polynomial()
{
    cout<<"\nEnter number of terms";
    cin>>sizeterms;
    coeff= new int[sizeterms];
    exp =new int[sizeterms];
}
int getsize()
{
    return sizeterms;
}

 friend istream &operator >> (istream &IN, polynomial &T)
 {

            int j;
            for(j=0;j<T.sizeterms;j++)
            {
                cout<<"\nEnter "<<j+1<<"th term exponent";
                IN>>T.exp[j];
                cout<<"\nEnter "<<j+1<<"th term coefficient";
                IN>>T.coeff[j];

            }

  return IN;
}
 friend ostream &operator << (ostream &OUT, polynomial &t)
  {
   int i;

            cout<<"\nPOLYNOMIAL :";
            int j;
            for(j=0;j<t.sizeterms;j++)
            {
                if(t.coeff[j]!=0)
                {(t.coeff[j]>0&&j!=0)?cout<<"+":cout<<"";cout<<t.coeff[j]<<"x^"<<t.exp[j];}
            }

   return OUT;
  }
polynomial operator +(polynomial T)
 {
    int maxv= sizeterms + T.getsize();
    /*if(sizeterms>=T.getsize())
    {
        maxv = sizeterms;
    }
    else
    {
        maxv = T.getsize();
    }*/
    polynomial R(maxv);
    int p = 0, q = 0, k = 0;
    while(p<sizeterms&&q<T.getsize())
    {
        if(exp[p]>T.exp[q])
        {
            R.coeff[k] = coeff[p];
            R.exp[k] = exp[p];
            p++;
            k++;
        }
        else if(exp[p]<T.exp[q])
        {
            R.coeff[k] = T.coeff[q];
            R.exp[k] = T.exp[q];
            q++;
            k++;
        }
        else if(exp[p]==T.exp[q])
        {
            R.exp[k] = exp[p];
            R.coeff[k] = coeff[p] + T.coeff[q];
            q++;
            p++;
            k++;
        }
    }
    if(p==sizeterms)
    {
        for(int j = q;j<T.getsize();j++)
        {
            R.exp[k] = T.exp[j];
            R.coeff[k] = T.coeff[j];
            k++;
        }
    }
    else if(q==T.getsize())
    {
        for(int j = p;j<sizeterms;j++)
        {
            R.exp[k] = exp[j];
            R.coeff[k] = coeff[j];
            k++;
        }
    }

 return R;
 }
 polynomial operator *(polynomial T)
 {
     polynomial R(sizeterms * T.sizeterms);
     int i, j;
     static int k = 0;
     for(i=0;i<sizeterms;i++)
     {
         for(j=0;j<T.sizeterms;j++)
         {
             R.coeff[k] = coeff[i]*T.coeff[j];
             R.exp[k] = exp[i]+T.exp[j];
             k++;
         }

     }
     for(i=0;i<R.getsize();i++)
     {
         for(j=i+1;j<R.getsize();j++)
         {
             if(R.exp[i]==R.exp[j]&&R.coeff[i]!=0)
             {
                 R.coeff[i] += R.coeff[j];
                 R.coeff[j] = 0;
             }
         }
     }
     return R;

 }
 void evaluate()
    {

        int x;
        int sum=0;                                                                               //MADE BY: ARJUN DASHRATH, 3210
        cout<<"\nEnter the value of x";
        cin>>x;
        int j;
        for(j=0;j<sizeterms;j++)
        {
            sum += coeff[j]*(pow(x,exp[j]));
        }
        for(j=0;j<sizeterms;j++)
            {
                (coeff[j]>0&&j!=0)?cout<<"+":cout<<"";cout<<coeff[j]<<"x^"<<exp[j];
            }
        cout<<" for x = "<<x<<" is "<<sum;


    }
};

int main()
{

    polynomial obj , obj1;
    char ch = 'y';
    while(ch == 'y'){
    cout<<"\n#############################      MENU       ##############################################\n";

    int choice;
    cout<<"1. CREATE/INPUT POLYNOMIALS\n";
    cout<<"2. DISPLAY POLYNOMIALS\n";
    cout<<"3. ADD POLYNOMIALS\n";
    cout<<"4. MULTIPLY POLYNOMIALS\n";
    cout<<"5. EVALUATE POLYNOMIALS\n";
    cout<<"\nEnter choice:";
    cin>>choice;

    switch(choice)
    {
        case 1: {cin>>obj>>obj1;}
        break;
        case 2: {cout<<obj<<"\n"<<obj1;}
        break;
        case 3: {polynomial res = obj + obj1;cout<<res;}
        break;
        case 4: {polynomial mulres = obj * obj1;cout<<mulres;}
        break;
        case 5: {obj.evaluate();cout<<"\n";obj1.evaluate();}
        break;
        default: {cout<<"Invalid option";}
    }
    cout<<"\n Enter again?(y/n)";
    cin>>ch;
    }
}
