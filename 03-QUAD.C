#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int a, b, c;
    int det;
    printf("Format your equation in the form of ax^2 + bx + c = 0 and enter the value of a, b, and c respectively:\n");
    scanf("%d%d%d", &a, &b, &c);
    det = (b*b) - 4*a*c;

    if(det < 0)
    {
	printf("Entered equation doesn't have real roots.\n");
	getch();
	return 0;
    }

    printf("Roots of the enterd equaion are: %.2f and %.2f.\n", (-1*b + pow(det, 0.5))/(2*a), (-1*b - pow(det, 0.5))/(2*a));
    getch();
    return 0;
}
