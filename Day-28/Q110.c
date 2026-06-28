#include <stdio.h>
#include <string.h>

struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

int main() {

    struct Account acc;
    int choice;
    float amount;

    printf("===== BANK ACCOUNT MANAGEMENT SYSTEM =====\n");

    // Creating Account
    printf("\nEnter Account Number: ");
    scanf("%d", &acc.accountNumber);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);


    while(1) {

        printf("\n\n----- MENU -----\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch(choice) {

            case 1:
                printf("\nEnter amount to deposit: ");
                scanf("%f", &amount);

                acc.balance = acc.balance + amount;

                printf("Money Deposited Successfully!\n");
                printf("Current Balance: %.2f\n", acc.balance);

                break;


            case 2:
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= acc.balance) {

                    acc.balance = acc.balance - amount;

                    printf("Withdrawal Successful!\n");
                    printf("Remaining Balance: %.2f\n", acc.balance);

                }
                else {
                    printf("Insufficient Balance!\n");
                }

                break;


            case 3:
                printf("\nCurrent Balance: %.2f\n", acc.balance);
                break;


            case 4:
                printf("\n----- ACCOUNT DETAILS -----\n");
                printf("Account Number: %d\n", acc.accountNumber);
                printf("Account Holder: %s\n", acc.name);
                printf("Balance: %.2f\n", acc.balance);

                break;


            case 5:
                printf("Thank you for using Bank System!");
                return 0;


            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}