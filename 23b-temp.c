#include<stdio.h>
#include<conio.h>

int main()
{
    float t;
    int choice = 4;

    

    while (3 < 4)
    {    
        switch (choice)
        {
        case 1:
            printf("Enter the temperature in Farenheit:\n");
            scanf("%f", &t);
            printf("Temperature in celsius is %.2f degrees.", 5 *(t - 32) / 9.0);
            getch();
            return 0;
        
        case 2:
            printf("Enter the temperature in Celsius:\n");
            scanf("%f", &t);
            printf("Temperature in Farenheit is %.2f degrees.", (t * 1.8) + 32);
            getch();
            return 0;

        default:
            printf("For conversion from Farenheit to Celsius enter 1 or enter 2 for vice-versa: ");
            scanf("%d", &choice);
        }
    }
}