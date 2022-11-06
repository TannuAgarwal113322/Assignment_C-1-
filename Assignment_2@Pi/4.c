#include<stdio.h>
int main()
{
    int x = 5, y = 2;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("Swap Values of X = %d and y = %d without using third variable", x, y);
    return 0;
}