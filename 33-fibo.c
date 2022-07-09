#include <stdio.h>
#include<conio.h>

unsigned long fibo(int a);

int main() {
    int length = 0, i;
    printf("What is the length of the required Fibonacci series?\n");
    while (length < 2) {
        printf("Enter number greater than 1: \a");
        scanf("%d", &length);
        }
    printf("Following is the required Fibonacci Series of length %d:\n0", length);
    for (i = 1; i < length; i++) {
        printf(", %lu", fibo(i));
    }
    printf("\n");
    getch();
    return 0;
}

unsigned long fibo(int a)
{
    if (a <= 1) return 1;
    return fibo(a - 1) + fibo(a - 2);
}