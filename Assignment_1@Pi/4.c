#include<stdio.h>
int main()
{
    float A, R;
    printf("Enter the radius of the circle");
    scanf("%f", &R);
    A = (3.14) * R * R;
    printf("Area of circle is %.2f having the radius %.1f", A,R);
    return 0;

}
