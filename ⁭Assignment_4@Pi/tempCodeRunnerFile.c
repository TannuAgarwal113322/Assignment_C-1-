#include<stdio.h>
int main()
{
    int i, x, factorial=1;
    printf("Enter a number");
    scanf("%d", &x);
    i=x;
    for(i=x; i>=1; i--)
    {
        factorial = factorial * i;
        
    }
    printf(" factorial of a number = %d",  factorial);
    return 0;

    
}