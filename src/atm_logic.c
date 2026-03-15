#include <stdio.h>
#include "../include/atm_logic.h"

void displayMenu() {
    printf("\n--- C-BANK TERMINAL ---\n");
    printf("1. Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
    printf("Selection: ");
}

void checkCurrentBalance(float balance) {
    printf("Your current balance: %f\n", balance);
}    

float depositAmount(float balance) {
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

    return balance;
}

float withdrawAmount(float balance) {
    float withdrawAmount = 0.0;
    printf("Enter the withdraw amount: ");
    scanf("%f", &withdrawAmount);

    balance -= withdrawAmount;

    printf("Amount %.2f is successfully debited.\n", withdrawAmount);
    printf("Your current balance: %.2f\n", balance);

    return balance;
}

