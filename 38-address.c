#include <stdio.h>
#include <conio.h>

void sum(int *a);

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("This is the entered number: %d\nNow The entered number will be passed to function named sum using its address\n", num);

    sum(&num);

    printf("Value of number inside main function is %d\n", num);
    getch();

}

void sum(int *a)
{
    *a += 2;
    printf("On Adding 2 to the given number.\nValue of number inside sum function is %d\n", *a);
}