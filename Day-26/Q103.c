#include<stdio.h>
int main(){
    int pin=1221,entered_pin,choice;
    float balance=15000.0,amount;

    printf("-----WELCOME TO ICICI BANK ATM-----\n");
    printf("Enter Your Pin : ");
    scanf("%d",&entered_pin);

    if(entered_pin!=pin){
        printf("Invalid Pin!\nAccess Denied!!");
        return 0;
    }
    
    do{
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");

        printf("Enter Your Choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Current Balance : Rs.%.2f\n",balance);
            break;

            case 2:
            printf("Enter Amount To Withdraw : ");
            scanf("%f",&amount);

            if(amount<=0){
                printf("Invalid Amount\n");
            }
            else if(amount>balance){
                printf("Insufficient Balance\n");
            }
            else{
                balance-=amount;
                printf("Rs.%.2f Withdrawn Successfully\n",amount);
            }
            break;
            
            case 3:
            printf("Enter Amount To Deposit : ");
            scanf("%f",&amount);

            if(amount<0){
                printf("Invalid Amount!\n");
            }
            else{
                balance+=amount;
                printf("Rs.%.2f Deposited Successfully\n",amount);
            }
            break;

            case 4:
            printf("-----!Thank You For Using ATM!-----\n");
            break;

            default:
            printf("Invalid Choice!\n");
        }
    }
    while(choice!=4);

    return 0;
}