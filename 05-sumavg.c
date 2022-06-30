#include<stdio.h>

int main()
{
    int i, num, sum = 0, large, small;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        sum += num;
        if(i == 0) {
            small = num;
            large = num;
        }
        if (small > num) small = num;
        if (large < num) large = num;
    }
    printf("Sum of given numbers is %d.\nAverage of given numbers is %.2f.\nSmallest number is %d.\nLargest number is %d.\n", sum, sum / 10.0, small, large);
    return 0;
}
