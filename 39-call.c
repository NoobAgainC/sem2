#include <stdio.h>
#include <conio.h>

void swap_by_ref(int *a , int *b);
void swap_by_val(int a , int b);

int main()
{
    int a, b;
    printf("Enter two different numbers.\n");
    scanf("%d%d", &a, &b);
    printf("Value of a is %d, and b is %d\n", a, b);
    swap_by_val(a, b);
    printf("\tValues inside main function:\n\t\t a = %d, b = %d\n", a, b);
    swap_by_ref(&a, &b);
    printf("\tValues inside main function:\n\t\t a = %d, b = %d\n", a, b);
    getch();
}

void swap_by_ref(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping by reference.\n\t Values inside swapping function:\n\t\ta = %d, b = %d\n", *a, *b);
}

void swap_by_val(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping by value.\n\t Values inside swapping function:\n\t\ta = %d, b = %d\n", a , b);
    
}