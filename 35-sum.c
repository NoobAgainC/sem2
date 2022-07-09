#include<stdio.h>
#include<conio.h>

int sum(int a);

void main()
{
    int a = 0;
    while(a < 1) 
    {
        printf("Enter a positive integer: ");
        scanf("%d", &a);
    }
    printf("Sum of individual digits of given number is: %d\n", sum(a));
    getch();
}

int sum(int a)
{
    if(a / 10 == 0) return a;

    return (a % 10) + sum(a / 10);    
}