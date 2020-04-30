#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, result=0, q,t, remainder;
    printf("Enter any Number to Check for Palindrome: ");
    scanf("%d", &n);

    q = n;

    while(q != 0)
    {
        remainder = q%10;
        result = result*10 + remainder;
        q =q/10;

    }

      printf("Reverse of the Entered Number is: %d", result);

    if (result == n)
        printf("\nAnd %d is a Palindrome", n);
    else
        printf("\nAnd %d is not a Palindrome", n);



    return 0;
}
