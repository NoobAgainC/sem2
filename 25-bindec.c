#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    long int bin;
    int i = 0, dec = 0;
    printf("Enter number in binary: ");
    scanf("%ld", &bin);
    while (bin != 0)
    {
        dec += round(pow(2, i)) * (bin % 10);
        bin /= 10;
        i++;
    }
    printf("Decimal equivalent of given binary number is: %d\n", dec);
    getch();
    return 0;
}