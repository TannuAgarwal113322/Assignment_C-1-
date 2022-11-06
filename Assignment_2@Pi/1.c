#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    printf("Unit digit is %d of the number %d", x%10, x);
    return 0;
}