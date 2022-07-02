#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int num, len, q, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    q = num;
    while (q != 0)
    {
        q /= 10;
        len++;
    }
    q = num;
    while (q != 0)
    {
        sum += pow((q % 10), len);
        q /= 10;
    }
    num == sum ? printf("Entered number is an armstrong number.\n") : printf("Entered number is not an armstrong number.\n");
    getch();
    return 0;
}