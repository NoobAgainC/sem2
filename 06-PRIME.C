#include<stdio.h>
#include<conio.h>
#include<math.h>

int exit_prog(int val);

int main() {
    long int num, sqroot;
    int i;
    printf("Enter a number: ");
    scanf("%ld", &num);
    if (num == 2) return exit_prog(0);
    if (num % 2 == 0 || num < 2) return exit_prog(1);
    sqroot = sqrt(num);
    for (i = sqroot; i > 1; i--) {
        if (num % i == 0) {
            return exit_prog(1);
        }
    }
    return exit_prog(0);
}
int exit_prog(int val) {
    char ans;
    if (val == 1) printf("The number entered is not a prime number.\n");
    else printf("The number entered is a prime number.\n");
    getch();
    return 0;
}
