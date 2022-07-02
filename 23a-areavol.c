#include<stdio.h>
#include<conio.h>
#include<math.h>

#define pi 3.14159

int main()
{
    float l, h, r;
    int choice = 4;
    
    while (3 < 4)
    {    
        switch (choice)
        {
        case 1:
            printf("Enter the radius of sphere:\n");
            scanf("%f", &r);
            printf("Area of the given sphere is: %.2f square units and volume is: %.2f cubic units.\n", 4*pi*pow(r, 2), (4/3.0)*pi*pow(r, 3));
            getch();
            return 0;
        
        case 2:
            printf("Enter the radius and height of conee:\n");
            scanf("%f%f", &r, &h);
            l = sqrt((h*h) + (r*r));
            printf("Total Surface Area of the given cone is: %.2f square units and volume is: %.2f cubic units.\n", pi*r*(r + l), (pi*r*r*h)/3);
            getch();
            return 0;

        case 3:
            printf("Enter the length of cube:\n");
            scanf("%f", &l);
            printf("Area of the given cube is: %.2f square units and volume is: %.2f cubic units.\n", 6*pow(l, 2), pow(l, 3));
            getch();
            return 0;
        default:
            printf("Enter 1 to get the surface area and volume of sphere or 2 for cone or 3 for cube:\n");
            scanf("%d", &choice);
        }
    }
}