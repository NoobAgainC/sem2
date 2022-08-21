#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("This is the entered number: %d\n", num);
    printf("This is the address of entered number: %p\n",&num);
    printf("This is the pointer to the address of entered number which is the number itself: %d\n", *&num);
    getch();
}