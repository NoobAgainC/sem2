#include<stdio.h>
#include<conio.h>

int main()
{
    char a[100];
    int len, i = 0;

    printf("Enter a string:\n\t\t");
    scanf("%[^\n]", a);

    while(a[i] != '\0') 
    {
        if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) len++;
        i++;
    }
    printf("Length of inputted string is %d and number of words in it is %d.\n", i, len);
    getch();
}