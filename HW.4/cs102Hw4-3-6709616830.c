#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 100

typedef struct
{
    int accountNumber;
    char name[50];
    float balance;
} Customer;

Customer customers[MAX_CUSTOMERS];
int customerCount = 0;

void addCustomer()
{
    if (customerCount >= MAX_CUSTOMERS)
    {
        printf("Cannot add more customers. Limit reached.\n");
        return;
    }
    printf("Enter account number: ");
    scanf("%d", &customers[customerCount].accountNumber);
    printf("Enter customer name: ");
    scanf(" %[^\n]", customers[customerCount].name);
    printf("Enter initial balance: ");
    scanf("%f", &customers[customerCount].balance);
    customerCount++;
    printf("Customer added successfully.\n");
}

void deposit()
{
    int accountNumber;
    float amount;
    printf("Enter account number for deposit: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < customerCount; i++)
    {
        if (customers[i].accountNumber == accountNumber)
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            customers[i].balance += amount;
            printf("Deposit successful. New balance: %.2f\n", customers[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

void withdraw()
{
    int accountNumber;
    float amount;
    printf("Enter account number for withdrawal: ");
    scanf("%d", &accountNumber);

    for (int i = 0; i < customerCount; i++)
    {
        if (customers[i].accountNumber == accountNumber)
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > customers[i].balance)
            {
                printf("Insufficient balance.\n");
            }
            else
            {
                customers[i].balance -= amount;
                printf("Withdrawal successful. New balance: %.2f\n", customers[i].balance);
            }
            return;
        }
    }
    printf("Account not found.\n");
}

void displayCustomers()
{
    if (customerCount == 0)
    {
        printf("No customers to display.\n");
        return;
    }
    printf("Customer List:\n");
    for (int i = 0; i < customerCount; i++)
    {
        printf("Account Number: %d, Name: %s, Balance: %.2f\n",
               customers[i].accountNumber,
               customers[i].name,
               customers[i].balance);
    }
}

int main()
{
    int choice;
    do
    {
        printf("\nBank Management System\n");
        printf("1. Add New Customer\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display All Customers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addCustomer();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            displayCustomers();
            break;
        case 5:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
