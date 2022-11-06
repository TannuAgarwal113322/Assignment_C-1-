#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    (x & 1)? printf("%d is an odd number",x) : printf("%d is an even number",x);
    return 0;
}