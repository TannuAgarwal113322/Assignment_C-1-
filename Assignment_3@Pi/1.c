/*Que.1 Write a program to check whether a given number is positive or non positive*/



#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if(x>0)
     printf("%d is a positive number", x);
    else if(x<0)
      printf("%d is a non-positive number", x);
    return 0;
}