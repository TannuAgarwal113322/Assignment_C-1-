#include<stdio.h> 
int main()
{
    int x,y, temp;
    printf("Enter two  number");
    scanf("%d %d", &x, &y);
    temp = (x * 10) + y; 
   printf("Append the digit %d in the number %d, so the updated number is %d", y, x ,temp);
    return 0;
}