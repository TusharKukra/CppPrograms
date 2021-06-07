#include<stdio.h>

int main(){

     int i,j,n;
     printf("Enter number of Pyramid: ");
     scanf("%d", &n);

     for(i=1 ; i<=n ; i++) //Iteration for Rows
      {

           for(j=1 ; j<=2*n-1 ; j++) //Iteration for columns, for n rows there are 2n - 1 columns
             {

                  if(j >= n-(i-1) && j <= n+(i-1) )
                    {
                         printf("*");
                    }
                  else
                  {
                       printf(" ");
                  }

             }
             printf("\n");
      }
      return 0;
}
