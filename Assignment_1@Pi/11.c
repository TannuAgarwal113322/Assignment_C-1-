#include<stdio.h>
int main()
{
    int hour, minute;
    printf("Enter Time in HH:MM Format : \t");
    scanf("%d:%d", &hour, &minute);
    printf("Time is : \"%d Hour and %d Minute\"", hour, minute);
    return 0;

}
