/*Que.10 Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage*/



#include<stdio.h>
int main()
{
    float cp, sp, a,b; 
    float pl, ll;
    printf("Enter cost price and selling number");
    scanf("%f %f", &cp, &sp);
    if((sp-cp)>0)
    {
        a = sp - cp;
        pl = (a*100)/sp;
        printf("Profit Percent = %.2f", pl);
    }
    else if((sp-cp)<0)
    {
        b = cp - sp;
        ll = (b*100)/cp ;
        printf("Loss Percent = %.2f", ll);
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}