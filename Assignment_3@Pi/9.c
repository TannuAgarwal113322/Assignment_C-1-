/*Que.9 Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times*/



#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers");
    scanf("%d %d %d", &a, &b, &c);
    if((c>a) && (c>b))
    {
          printf("%d is greatest than %d and %d\n", c, a,b);
          if((c==a) || (c==b))
             printf("%d is appearing two times", c); 
    }
      
    else if((b>a) && (b>c))
    {
        printf("%d is greatest than %d and %d\n", b, a, c);
        if((b==a) || (b==c))
             printf("%d is appearing two times", b);
    }
    else 
    {
          printf("%d is greatest than %d and %d\n", a, b, c);
          if((a==b) || (a==c))
             printf("%d is appearing two times", a);

    }
    return 0;
}