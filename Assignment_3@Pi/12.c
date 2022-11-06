/*Que.12  Write a program to check whether a given alphabet is in uppercase or lowercase*/



#include<stdio.h>
int main()
{
    char a = 'P';
    if((a>=65) && (a<=90))
        printf("Alphabet is in UpperCase Letter");
    else if((a>=97) && (a<=122))
        printf("Alphabet is in LowerCase Letter");
    else
        printf("Invalid  Input");
    return 0;
}