#include <stdio.h>
#include <conio.h>

#define INIT 5000

int service();

void transaction(int choice);

int amt = INIT;

int main()
{
    
    printf("Welcome to C ATM Service.\nYour account was successfully opened with initial amount of %d Rupees.\n", amt);
    return service();
    
}

int service()
{
    int choice = 0;
    printf("We offer following services:\n1. Deposit money\n2. Withdraw money\n3. Check Remaining Balance\n4. Close your Account\n");
    while(choice < 1 || choice > 4)
    {
        printf("Enter the number of the service you want to use: ");
        scanf("%d", &choice);
    }

    switch (choice)
    {
    case 1:
        transaction(0);
        break;
    
    case 2:
        transaction(1);
        break;
    case 3:
        printf("\n\n\n\tYour Remaining balance is: Rs. %d.00\n\n\n", amt);
        break;
    case 4:
        printf("\n\n\n\tYour account was successfully closed with remaining balance of %d.00\n\n\n", amt);
        getch();
        return 0;
        break;
    }
    return service();
}

void transaction(int choice)
{
    int val = 0, temp = amt;
    char *process = choice == 0 ? "deposited in" : "withdrawn from";
    while(val < 1 || val % 100 != 0)
    {
        printf("\n\n\n\tNote: We only acccept and give notes starting from 100 Rupees.\n\tEnter the amount to be %s your account(in Rs.).: ", process);
        scanf("%d", &val);
    }

    amt = choice == 0 ? amt + val : ((amt - val) >= 0 ? amt - val : amt);

    temp != amt ? printf("\tRs. %d successfully %s your account.\n\n\n", val, process) : printf("\tInsufficient Balance\n\n\n");
    
}