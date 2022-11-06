#include<stdio.h>
int main()
{
    int x, n, sum=0;
    printf("Enter a 3-digit number");
    scanf("%3d", &x);
    n = x%10;
    sum = sum + n;
    x = x/10;
    n = x%10;
    sum = sum + n;
    x = x/10;
    sum = sum + x;
   printf("The sum of the 3-digit number %d is %d",x, sum);
    return 0;
}