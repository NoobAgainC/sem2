#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct pupil{
    char name[32];
    unsigned int roll;
    char city[32];
    unsigned int zip;
    struct pupil *next;
} stud;

stud * insert_student(int num, stud *student);
void print_student(stud * student);

int main()
{

    int num;
    stud *student;
    printf("Enter the number of students: ");
    scanf("%d", &num);

    student = insert_student(num, student);
    print_student(student);

}

stud * insert_student(int num, stud *head)
{
    stud *temp;
    int i;
    stud **nxt = &head;
    for (i = 0; i < num; i++)
    {
        temp = (stud *) (malloc(sizeof(stud)));
        printf("Enter following student details:\nName: ");
        scanf("%s", temp->name);
        printf("Roll Number: ");
        scanf("%d", &temp->roll);
        printf("City: ");
        scanf("%s", temp->city);
        printf("Zipcode: ");
        scanf("%d", &temp->zip);

        temp -> next = NULL;

        *nxt = temp;

        nxt = &temp->next;
    }
    return head;

}

void print_student(stud * student)
{
    stud *current = student;
    int count = 1;
    // printf("|Serial No.|\t\t|Student Name|\t\t|Student Roll Number|\t\t|City|\t\t|Zipcode|\n");
    // while (current != NULL)
    // {
    //     printf("%s\t\t%d\t\t%s\t\t%d\n", current->name, current->roll, current->city, current->zip);
    //     current = current->next;
    // }

    FILE *fpt;

    fpt = fopen("Students.csv", "w+");
    fprintf(fpt, "Serial No., Student Name, Student Roll Number, City, Zipcode\n" );

    while (current != NULL)
    {
        fprintf(fpt, "%d,%s,%d,%s,%d\n",count++, current->name, current->roll, current->city, current->zip);
        current = current->next;
    }
    fclose(fpt);
    
}