#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 10

typedef struct{
    char name[32];
    unsigned int roll;
    char city[32];
    unsigned int zip;
} stud;

void main()
{
    stud student[MAX];
    int num = 0, i;
    while(num < 1 || num > 10)
    {
        printf("Enter the number of students (MAX = %d): ", MAX);
        scanf("%d", &num);
    }
    
    for (i = 0; i < num; i++)
    {
        printf("Enter following student details for student no. %d:\nName: ", i+1);
        scanf("%s", student[i].name);
        printf("Roll Number: ");
        scanf("%u", &student[i].roll);
        printf("City: ");
        scanf("%s", student[i].city);
        printf("Zipcode: ");
        scanf("%u", &student[i].zip);
    }
    
    for(i = 0; i < num; i++)
    {
        printf("Name of student: %s\n\tRoll No.: %u\n\tCity: %s\n\tZipcode: %u\n", student[i].name, student[i].roll, student[i].city, student[i].zip);
    }
    getch();
}