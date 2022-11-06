#include<stdio.h>
int main()
{
     float INR, USD;
     printf("Enter the amount in Indian Currency");
     scanf("%f", &INR);//2560.575
     USD = INR/76.23;
     printf("Currency Conversion INR to USD is $%f", USD);
     return 0;
}