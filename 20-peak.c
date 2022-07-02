#include<stdio.h>
#include<conio.h>

#define max 10

int main()
{
    int num[max];
    int small, large, i, len = 12;
    

    while(len < 1 || len > max) 
    {
        printf("Enter number of elements in the array[max = %d]: ", max);
        scanf("%d", &len);
    }
    printf("Enter all numbers in array:\n");
    for(i = 0; i < len; i++) scanf("%d", &num[i]);

    for(i = 1, small = num[0], large = num[0]; i < len; i++)
    {
        if (num[i] > large) large = num[i];
        if (num[i] < small) small = num[i];
    }
    printf("The largest number is %d and the smallest number is %d.\n", large, small);
    return 0;
}