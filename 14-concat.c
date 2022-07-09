#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    int len1, len2, i;
    char first[100], second[100], third[200];
    printf("Enter two strings that you want to concat:\n");
    scanf("%[^\n] %[^\n]",first, second);
    len1 = strlen(first);
    len2 = strlen(second);

    for (i = 0; i < len1 + len2; i++)
    {
        if(i >= len1) third[i] = second[i - len1];
        else third[i] = first[i];
    }
    third[len1 + len2] = '\0';
    printf("\t\t%s\n", third);
    getch();
    return 0;
}