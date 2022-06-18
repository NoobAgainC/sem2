#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    char a[100];
    int len, i;

    printf("Enter a string:\n\t\t");
    scanf("%[^\n]", a);
    len = strlen(a);
    printf("%d", len);
    printf("The reverse of entered string is :\n\t\t");
    for (i =  len - 1; i >= 0; i--)
    {
        printf("%c" , a[i]);
    }
    printf("\n");
    getch();
    return 0;
}