/*Que.15 Write a program to check whether a given number is positive, negative or zero.
*/



#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if(x>0)
     printf("%d is a positive number", x);
    else if(x<0)
      printf("%d is a negative number", x);
    else
      printf("%d is equal to Zero", x);
    return 0;
}