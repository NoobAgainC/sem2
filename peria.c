#include<stdio.h>

#define pi 3.14159

int main()
{
    float l, b;
    int choice = 3;
    
    while (3 < 4)
    {    
        switch (choice)
        {
        case 1:
            printf("Enter the radius of circle:\n");
            scanf("%f", &l);
            printf("Area of the given circle is: %.2f square units and perimeter is: %.2f units", pi*l*l, 2*pi*l);
            return 0;
        
        case 2:
            printf("Enter the length and width of rectangle:\n");
            scanf("%f%f", &l, &b);
            printf("Area of the given rectangle is: %.2f square units and perimeter is: %.2f units", l*b, 2*(l+b));
            return 0;

        default:
            printf("Enter 1 to get the area and perimeter of circle or 2 for rectangle:\n");
            scanf("%d", &choice);
        }
    }
}