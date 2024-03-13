#include <stdio.h>
#include <stdlib.h>

struct BankAccount {
    int accountNumber;
    char accountHolder[50];
    float balance;
};

struct BankAccount accounts[100];
int totalAccounts = 0;

// Function prototypes
void createAccount();
void deposit();
void withdraw();
void checkBalance();

int main() {
    int choice;

    while (1) {
        printf("\n-- Bank System Menu --\n");
        printf("1. Create an account\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Check balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                printf("Exiting the bank system. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void createAccount() {
    if (totalAccounts >= 100) {
        printf("Cannot create more accounts. Bank capacity reached.\n");
        return;
    }

    struct BankAccount newAccount;
    printf("Enter account number: ");
    scanf("%d", &newAccount.accountNumber);

    printf("Enter account holder name: ");
    scanf(" %[^\n]", newAccount.accountHolder);

    newAccount.balance = 0.0;
    accounts[totalAccounts++] = newAccount;

    printf("Account created successfully!\n");
}

void deposit() {
    int accountNumber;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    int i;
    for (i = 0; i < totalAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter the amount to deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Deposit successful. New balance: %.2f\n", accounts[i].balance);
            return;
        }
    }

    printf("Account not found. Please check the account number and try again.\n");
}

void withdraw() {
    int accountNumber;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    int i;
    for (i = 0; i < totalAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Enter the amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= accounts[i].balance) {
                accounts[i].balance -= amount;
                printf("Withdrawal successful. New balance: %.2f\n", accounts[i].balance);
            } else {
                printf("Insufficient balance.\n");
            }
            return;
        }
    }

    printf("Account not found. Please check the account number and try again.\n");
}

void checkBalance() {
    int accountNumber;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    int i;
    for (i = 0; i < totalAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("Account Holder: %s\n", accounts[i].accountHolder);
            printf("Account Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }

    printf("Account not found. Please check the account number and try again.\n");
}
