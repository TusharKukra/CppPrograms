#include<iostream>

using namespace std;

int main(){
    int year;
    cin>>year;
    if(year%400==0)
    {
        cout<<"LEAP YEAR!";
    }
    else if(year%100==0)
    {
        cout<<"NOT LEAP YEAR!";
    }
    else if(year%4==0)
    {
        cout<<"LEAP YEAR!";
    }
    else
    {
        cout<<"NOT LEAP YEAR!";
    }
    return 0;
}