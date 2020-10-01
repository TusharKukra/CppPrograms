#include<iostream>
using namespace std;


double sum = 0;

double pow(double n,double l)
{
    if(l>0)
    { return n * pow(n,l-1);
    }
    else
    {
        return 1;

    }
}
double fact(double n)
{
    if(n>1)
    {
        return n * fact(n-1);
    }
    else
    {
        return 1;
    }
}
double taylorsum(int j,int n)
{
    if(n>0)
    {double x = n-1;
    double sum1=(pow(j,x)/fact(x));

    sum = sum + sum1;

    taylorsum(j,n-1);
    }
    else
    {
        return sum;
    }
}






int main()
{
    cout<<"Enter the numbers";
    int n,l;
    cin>>l>>n;
    taylorsum(l,n);
    printf("\n %f",sum);

}
