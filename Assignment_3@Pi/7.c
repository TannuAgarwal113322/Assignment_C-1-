/*Que.7 Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/



#include<stdio.h>
int main()
{
    int a, b, c, Discriminant;
    printf("Enter the coefficients of quadratic equation variable");
    scanf("%d %d %d", &a, &b, &c);
    Discriminant = b * b - 4 * a * c;
    if(Discriminant>0)
       printf("D = %d , Hence Roots are Real and Distinct", Discriminant);
    else if(Discriminant==0)
       printf("D = %d , Hence Roots are Real and Equal", Discriminant);
    else 
       printf("D = %d , Hence Roots are imaginary", Discriminant);
       


    return 0;
}