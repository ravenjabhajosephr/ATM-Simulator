#include <stdio.h>
#include <stdbool.h>
#include "../include/atm_logic.h"

int main(void) {
    float balance = 1000.00;
    // float currentBalance = 0;
    int choice = 0;
    bool loop = true;

    while(loop){
        displayMenu(); 
        //Removed \n and stored result in memory address of variable choice
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1: checkCurrentBalance(balance); break;
        case 2: balance = depositAmount(balance); break;
        case 3: balance = withdrawAmount(balance); break;
        case 4: loop = false;
        default:
            printf("Invalid option\n");
        }
        }
    
        printf("Thank you for using our bank");
        return 0;
    }

