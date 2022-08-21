#include <stdio.h>
#include <conio.h>

void sum(int *arr);

void main()
{
    int arr[5], i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printf("%p", &arr[0]);
    sum(arr);
}

void sum(int *arr)
{
    int i, sum = 0;
    for (i = 0; i < 5; i++) sum += *(arr + i);
    printf("Sum of the array of numbers is: %d", sum);
}