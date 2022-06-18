#include<stdio.h>
#include<conio.h>

#define max 10

int first[max][max];
int second[max][max];
unsigned int row = max + 1, column = max + 1;

void input();

int main()
{
    int i, j;
    input();
    printf("The sum of given matrices is:\n\t\t\t");
    for (i = 0; i < column; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d\t", first[i][j] + second[i][j]);
        }
        printf("\n\t\t\t");
    }
    printf("\n");
    getch();
    return 0;
}
void input(){
    int i, j, k = 1;
    while(row > max || column > max) 
    {
        printf("Enter number of row and columns in the matrix(Max = %d):\n", max);
        scanf("%u%u", &row, &column);
    }
    printf("Enter the elements of matrix in following sequence:\n\t\t\t");
    for (i = 0; i < column; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d\t", k++);
        }
        printf("\n\t\t\t");
    }
    printf("\nEnter the elements of first array:\n");
    for (i = 0; i < column; i++)
    {
        for (j = 0; j < row; j++)
        {
            scanf("%d", &first[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the elements of second array:\n");
    for (i = 0; i < column; i++)
    {
        for (j = 0; j < row; j++)
        {
            scanf("%d", &second[i][j]);
        }
        printf("\n");
    }
}
