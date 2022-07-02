#include<stdio.h>
#include<conio.h>

#define max 10

void swap_sort(int array[], int len);
void swap(int *a, int *b);

int main()
{
    int num[max];
    int i, len = 0;
    

    while(len < 1 || len > max) 
    {
        printf("Enter number of elements in the array[max = %d]: ", max);
        scanf("%d", &len);
    }
    printf("Enter all numbers in array:\n");
    for(i = 0; i < len; i++) scanf("%d", &num[i]);

    swap_sort(num, len);
    
    printf("The second smallest number is %d.\n", num[1]);
    return 0;
}

void swap_sort(int array[], int len)
{
    int i, j;
    for(i = 0; i < len; i++)
    {
        for(j = 0; j < len; j++)
        {
            if(array[i] < array[j]) swap(&array[i], &array[j]);
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}