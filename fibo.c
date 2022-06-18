#include <stdio.h>
#include<conio.h>

int main() {
    unsigned long int a = 0, b = 1, sum;
    int length = 0;
    char ans;
    printf("What is the length of the required Fibonacci series?\n");
    while (length < 2) {
        printf("Enter number greater than 1: \a");
        scanf("%d", &length);
        }
    printf("Following is the required Fibonacci Series of length %d:\n%lu, %lu", length, a, b);
    for (int i = 2; i < length; i++) {
        sum = a + b;
        printf(", %lu", sum);
        a = b;
        b = sum;
    }
    printf("\n");
    getch();
    return 0;
}