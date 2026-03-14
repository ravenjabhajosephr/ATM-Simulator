#include <stdio.h>
#include <stdbool.h>

void checkCurrentBalance(float balance);
void depositAmount(float balance);
void withdrawAmount(float balance);

int main(void) {
    float balance = 1000.00;
    float currentBalance = 0;
    int choice = 0;
    bool loop = true;
    printf("-------Welcome to C-bank-------\n");

    while(loop){
        printf("Select one of the below options:\n");
        printf("1. Check current balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter value here: "); 
        
        //Removed \n and stored result in memory address of variable choice
        scanf("%d", &choice);
    
            if (choice == 4) { 
                loop = false;    
            }
            else if (choice == 1) {
                checkCurrentBalance(balance);
            }
            else if (choice == 2) {
                depositAmount(balance);
                // printf("Deposit Amount logic goes here.\n");
            }
            else if (choice == 3) {
                withdrawAmount(balance);
                // printf("Withdraw Amount logic goes here.\n");
            }
            else {
                printf("Invalid option");
            }
        
        }
    
        printf("Thank you for using our bank");
        return 0;
    }

void checkCurrentBalance(float balance) {
    printf("Your current balance: %f\n", balance);
}    

void depositAmount(float balance) {
    float depositAmount = 0.0;
    printf("Enter the deposit amount: ");
    scanf("%f", &depositAmount);

    if (depositAmount < 0) {
        printf("Entered amount is less than zero. Please enter positive amount.\n");
    }
    else {
        balance += depositAmount;
        printf("Amount %.2f is successfully credited.\n", depositAmount);
        printf("Your current balance: %.2f\n", balance);
    }
}

void withdrawAmount(float balance) {
    float withdrawAmount = 0.0;
    printf("Enter the withdraw amount: ");
    scanf("%f", &withdrawAmount);

    balance -= withdrawAmount;

    printf("Amount %.2f is successfully debited.\n", withdrawAmount);
    printf("Your current balance: %.2f\n", balance);

}

