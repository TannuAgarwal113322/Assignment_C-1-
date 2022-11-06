#include<stdio.h>
int main()
{
    int day, month, year;
    printf("Enter a date :\n");
    scanf("Date : %d/%d/%d", &day, &month, &year);
    printf("Date is: \"Day - %d, Month - %d, Year - %d\"", day, month, year);
    return 0;

}
