#include<stdio.h>
#include<math.h>
#include<conio.h>

void prime(int num);

int main()
{
    long n, i;
    
    printf("Enter the number for getting prime numbers till that number:");
    scanf("%ld", &n);
    printf("Prime numbers between 1 and %ld are:", n);
    for(i = 1; i <= n; i++)
    {
        prime(i);
    }
    getch();
    return 0;
}

void prime(int num)
{
    long int sqroot, i;

    if (num == 2) 
    {
        printf("%ld\n", num);
        return;
    }
    if (num % 2 == 0 || num < 2 || num % 3 == 0) return;
    sqroot = round(sqrt(num));
    for (i = sqroot; i > 1; i--) {
        if (num % i == 0) {
            return;
        }
    }
    printf("%ld\n", num);
    return;
}