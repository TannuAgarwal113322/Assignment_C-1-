#include<stdio.h>
int main()
{
    int x, temp;
    printf("Enter a 3-digit number");
    scanf("%3d", &x);//865
    temp = x%100;//65
    x = x/100;//8
    x = (temp*10) + x;//658
    printf("Rotated Number towards right is %d", x);
    return 0;
}