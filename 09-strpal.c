#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char in[100];
    char out[100];
    int len;
    int i;
    printf("Enter a string:\n\t\t");
    scanf("%[^\n]", in);
    len = strlen(in);
    for (i = 0; i < len ; i++)
    {
        out[i] = in[len - i - 1];

        if(tolower(out[i]) != tolower(in[i]))
        {
            printf("The entered string is not a pallindrome.\n");
            getch();
            return 0;
        }
    }
    printf("The entered string is a pallindrome.\n");
    getch();
    return 0;
}
