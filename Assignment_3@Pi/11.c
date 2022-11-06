/*Que.11 Write a program to take marks of 5 subjects from the user and display whether the candidate passed the
examination or failed*/

#include<stdio.h>
int main()
{
    int Hin, Math, Sci, Eng, Com, sum; 
    float avg;
    printf("Enter marks out of 100 in 5 subjets\n");
    scanf("%d %d %d %d %d", &Hin, &Math, &Sci, &Eng, &Com);
    if((Hin>33) && (Math>33) && (Sci>33) && (Eng>33) && (Com>33))
    {
         sum = Hin + Math + Sci + Eng + Com;
         avg = sum/5.0;
         if(avg>=33)
         {
              printf("Student is passed with %.2f percentage", avg);

        }
        else
       {
              printf("Student is failed because of %.2f percentage", avg);
       }
    }
    else
    {
        printf("He/She is failed due to get less than 33 Marks");
    }
     return 0;
}