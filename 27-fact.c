#include<stdio.h>
#include<conio.h>

int main(void)
{
    int num, i;
    unsigned long fact = 1;

    printf("Enter a number:");
    scanf("%d", &num);

    if (num < 0) printf("Factorial is not defined for negative numbers.");
    
    else if (num == 0) printf("Factorial of 0 is 1");

    else
    {
        for (i = 1; i <= num; i++) fact *= i;
        printf("Factorial of %d is %lu.", num, fact);
    }
    getch();
    return 0;
}