#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    int len1, len2, i;
    char first[200];
    char second[100];
    printf("Enter two strings that you want to concat:\n");
    scanf("%[^\n] %[^\n]",first, second);
    len1 = strlen(first);
    len2 = strlen(second);

    for (i = 0; i < len2; i++)
    {
        first[i + len1] = second[i];
    }
    first[i + len1 + 1] = '\0';
    printf("\t\t%s\n", first);
    getch();
    return 0;
}