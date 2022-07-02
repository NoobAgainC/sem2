#include<stdio.h>
#include<conio.h>

int leap(int y);

int main()
{
    int y = -1;
    while(y < 0)
    {
        printf("Enter the year: ");
        scanf("%d", &y);
    }

    leap(y) == 0 ? printf("Entered year is a leap year.\n") : printf("Entered year is not a leap year.\n");
    getch();
    return 0;
}

int leap(int y)
{
    //https://www.mathsisfun.com/leap-years.html
    if (y % 400 == 0) return 0;
    else if (y % 100 == 0) return 1;
    else if (y % 4 == 0) return 0;
    else return 1;
}