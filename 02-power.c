#include<stdio.h>
#include<conio.h>

int main()
{
    long num;
    //Add this : "clrscr()"";
    clrscr();
    printf("Enter a number:\n");
    scanf("%ld", &num);
    (num % 2 == 0) ? printf("The Entered number is even and its square is %ld.\n", num*num) : printf("The Entered number is odd and its cube is %ld.\n", num*num*num);
    getch();
    return 0;
}
