/*Que.14 Write a program to check whether a given number is divisible by 7 or divisible by 3*/



#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if(((x%7==0) || (x%3==0)) && (x%21==0))
       printf("%d is divisible by  7 or 3",x);
    else 
        printf("%d is not divisible by  7 or 3",x);
    return 0;
}