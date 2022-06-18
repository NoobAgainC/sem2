#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int num, pal = 0, quo, i = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    quo = num;
    while (quo !=0)
    {
        quo /= 10;
        i++;
    }
    quo = num;
    while (quo != 0)
    {
        rem = quo % 10;
        quo /= 10;
        pal += rem * pow(10, i-1);
        i--;
    }
    if (num == pal) printf("Entered number is a palindrome.\n");
    else printf("Ëntered number is not a palindrome.\n");
    getch();
    return 0;
}