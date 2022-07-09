#include<stdio.h>
#include<conio.h>

unsigned long fact(int a);

int main(void)
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) printf("Factorial is not defined for negative numbers.");
    
    else 
    {
        printf("Factorial of %d is %lu.", num, fact(num));
    }
    getch();
    return 0;
}

unsigned long fact(int a)
{
    if(a == 0) return 1;

    return a * fact(a - 1);
}