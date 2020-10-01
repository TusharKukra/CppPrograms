#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, result=0, q,t, rem;
    printf("Enter any Number to Check for Palindrome: ");
    scanf("%d", &n);

    q = n;

    while(q != 0)
    {
        rem = q%10;
        result = result*10 + rem;
        q =q/10;

    }

      printf("Reverse of the Entered Number is: %d", result);

    if (result == n)
        printf("\nAnd %d is a Palindrome", n);
    else
        printf("\nAnd %d is not a Palindrome", n);



    return 0;
}
