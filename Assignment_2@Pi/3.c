#include<stdio.h>
int main()
{
    int x=5, y=2, temp;
    temp = y;
    y = x;
    x = temp;
    printf("Swap Values of X = %d and Y = %d", x,y);
    return 0;
}