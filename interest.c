#include<stdio.h>
#include<conio.h>
#include<math.h>

void ci();
void si();

int main()
{
    int choice = 3;
    clrscr();
    printf("What do you want to calculate?\n");
    while(choice < 1 || choice > 2 ) {
        printf("Enter 1 for Simple Interest and 2 for Compound Interest:\n");
        scanf("%d", &choice);
    }

    switch (choice)
    {
        case 1:
            si();
            break;
        
        case 2:
            ci();
            break;
    }
    getch();
    return 0;
}

void si()
{
    float p, r, t;
    printf("Enter Principle amount(in Rupees), Annual Interest Rate(in percents), Time period(in years); respectively:\n");
    scanf("%f%f%f", &p, &r, &t);
    printf("Simple Interest is: Rs. %.2f", (p*r*t)/100);
}

void ci()
{
    float p, r, n, t, sol;
    printf("Enter Principle amount(in Rupees), Interest Rate(in percents), Number of times Interest is compounded in a year, Time period(in years); respectively:\n");
    scanf("%f%f%f%f", &p, &r, &n, &t);
    sol = pow((1 + (r / (n * 100))), (n * t));
    printf("Compound Interest is: Rs. %.2f", p * (sol - 1));
}