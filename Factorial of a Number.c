#include <stdio.h>
#include <stdlib.h>

//Factorial Program

int main(){

 int n, r;
 printf("Finding Factorial of any Number \n Enter any Number: ");

 scanf("%d", &n);

 r = fact(n);
 printf("Factorial of %d is %d", n, r);
 return 0;
 }

 fact(int n){

 int r;
 if (n==0)
    r=1;
 else
    r= n* fact(n-1);
 return r;
 }
