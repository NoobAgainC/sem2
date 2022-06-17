#include<stdio.h>
#include<conio.h>

int main()
{
    int n, sum = 0, i;
    printf("Enter ten numbers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        sum += n;
    }
    printf("Sum of the numbers you entered is: %d and Average of the numbers is: %.2f\n", sum, sum / 10.00);
    getch();
    return 0;
}