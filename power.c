#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("The Entered number is even and its square is %ld.\n", num*num) : printf("The Entered number is odd and its cube is %ld.\n", num*num*num);
    getch();
    return 0;
}