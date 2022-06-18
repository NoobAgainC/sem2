#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char str[100];
    char sub[100];
    char temp[100];
    int i;
    printf("Enter a string:\n\t\t");
    scanf("%[^\n]", str);
    printf("Enter a sub-string to find:\n\t\t");
    scanf(" %[^\n]", sub);
    for (i = 0; i < strlen(str); i++)
    {
        if(str[i] == sub[0])
        {
            strncpy(temp, &str[i], strlen(sub));
            if (strcmp(temp, sub) == 0)
            {
                printf("Entered Substring is in the given string.\n");
                getch();
                return 0;
            }
        }
    }
    printf("Entered Substring is not in the given string.\n");
    getch();
    return 0;
}
