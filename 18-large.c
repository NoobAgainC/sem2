#include<stdio.h>
#include<conio.h>

#define max 10

int main()
{
    int num[max];
    int large1, large2, i, len = 12;
    

    while(len < 1 || len > max) 
    {
        printf("Enter number of elements in the array[max = %d]: ", max);
        scanf("%d", &len);
    }
    printf("Enter all numbers in array:\n");
    for(i = 0; i < len; i++) scanf("%d", &num[i]);

    for(i = 1, large1 = num[0], large2 = num[0]; i < len; i++)
    {
        if (num[i] > large1) 
        {
            large2 = large1;
            large1 = num[i];
        }
        else if (num[i] > large2) large2 = num[i];
    }
    printf("The second largest number is %d.\n", large2);
    return 0;
}