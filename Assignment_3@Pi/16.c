/*Que.16 Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character*/



#include<stdio.h>
int main()
{
    char chr;
    printf("Enter a character : ");
    scanf("%c", &chr);
    
    if((chr>=65) && (chr<=90))
        printf("%c is a UpperCase Letter", chr);
    else if((chr>=97) && (chr<=122))
        printf("%c is a LowerCase Letter",chr);
    else if((chr>=48) && (chr<=57))
        printf("%c is a number", chr);
    else
        printf("Special Character");
    return 0;
}