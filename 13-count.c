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
            if ((a[i-1] >= 'a' && a[i-1] <= 'z') || (a[i-1] >= 'A' && a[i-1] <= 'Z')) prev = 0;
            if (prev == 0 && ((a[i+1] >= 'a' && a[i+1] <= 'z') || (a[i+1] >= 'A' && a[i+1] <= 'Z'))) len++;
        }
        i++;
    }
    printf("Length of inputted string is %d and number of words in it is %d.\n", i-1, len);
    getch();
}