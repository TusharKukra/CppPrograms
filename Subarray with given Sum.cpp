#include<iostream>
using namespace std;

int SubarraySum (int array[], int N, int Sum){

 int current_sum, i, j;

 for(i=0;i<N;i++){

    current_sum=array[i];

    for(j=i+1;j<N+1;j++){

        if(current_sum==Sum)
        {
            cout<<"Substring is between index "<<i<<" and "<<j-1<<endl;
            return 1;
        }

        else if (current_sum > Sum){
            break;
        }

        current_sum+=array[j];
    }

 }
 cout<<"No subarray found with given Sum"<<endl;
return 0;
}
int main(){

int array[]= {1,3,8,9,11,13,17,21};

int N = sizeof(array)/sizeof(array[0]);
int Sum = 20;
SubarraySum(array,N,Sum);
return 0;

}

