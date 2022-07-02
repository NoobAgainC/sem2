#include<stdio.h>
#include<conio.h>

void main()
{
    int a = 0, q, sum = 0;
    while(a < 1) 
    {
        printf("Enter a positive integer: ");
        scanf("%d", &a);
    }
    q = a;
    while(q != 0)
    {
        sum += (q % 10);
        q /= 10;
    }
    printf("Sum of individual digits of given number is: %d\n", sum);
    getch();
}