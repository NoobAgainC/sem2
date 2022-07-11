#include<stdio.h>
#include<conio.h>

int main()
{
    char a[100];
    int len = 1, i = 0, prev = 1;

    printf("Enter a string:\n\t\t");
    fgets(a, 100, stdin);

    while(a[i] != '\0') 
    {
        if(a[i] == ' ') 
        {
            if (a[i-1] > 32 && a[i - 1] < 127) prev = 0;
            if (prev == 0 && (a[i + 1] > 32 && a[i + 1] < 127)) len++;
        }
        i++;
    }
    printf("Length of inputted string is %d and number of words in it is %d.\n", i-1, len);
    getch();
}