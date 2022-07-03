#include<stdio.h>
#include<conio.h>

#define pi 3.14159

int main()
{
    int choice = 3;
    float r;

    printf("Enter 1 to get the area of circle or 2 to get the circumference of circle:\n");
    while (choice < 1 || choice > 2) scanf("%d", &choice);
    printf("Enter the radius of circle(in metre):\n");
    scanf("%f", &r);
    choice == 1 ? printf("Area of given circle is %.2f square metres.\n", pi*r*r) : printf("Circumference of given circle is %.2f metres.\n", 2*pi*r);
    getch();
    return 0;
}
