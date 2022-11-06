/*Que.18 . Write a program which takes the month number as an input and display number of
days in that month*/


#include<stdio.h>
int main()
{
    int month_num, year;
    printf("Enter a year");
    scanf("%d",&year);
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
          printf("Enter a month Number");
          scanf("%d", &month_num);
           
           if((month_num == 1) && (month_num == 3) && (month_num == 5) && (month_num == 7) && (month_num == 8) && (month_num == 10) && (month_num == 12)) 
                printf("31 days in %d month", month_num);
    
           
           else if((month_num == 4) && (month_num == 6) && (month_num == 9) && (month_num == 11))
                printf("30 days in %d month", month_num);
           

           else if(month_num == 2)
                printf("29 days in %dnd month", month_num);
            
                 
    }
    
    
    else
    {
        printf("Enter a month Number");
          scanf("%d", &month_num);
           
           if((month_num == 1) && (month_num == 3) && (month_num == 5) && (month_num == 7) && (month_num == 8) && (month_num == 10) && (month_num == 12)) 
                printf("31 days in %d month", month_num);
    
           
           else if((month_num == 4) && (month_num == 6) && (month_num == 9) && (month_num == 11))
                printf("30 days in %d month", month_num);

           else if(month_num == 2)
               printf("28 days in %dnd month", month_num); 
           
    }

       return 0;
}