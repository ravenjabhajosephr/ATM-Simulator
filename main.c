#include <stdio.h>
#include <stdbool.h>

int main(void) {
    float balance = 1000.00;
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
                printf("Enter current balance:\n");
            }
            else if (choice == 2) {
                printf("Enter deposit amount:\n");
            }
            else if (choice == 3) {
                printf("Enter withdraw amount:\n");
            }
            else {
                printf("Invalid option");
            }
        
        }
    
        printf("Thank you for using our bank");
        return 0;
    }

    
