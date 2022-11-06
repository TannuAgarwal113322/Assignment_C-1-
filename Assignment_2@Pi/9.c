#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    x = (x/10) * 10;
    printf("The last digit of a number stored in a variable as zero , so the updated number is %d", x);
    return 0;
}