#ifndef ACCOUNT_H
#define ACCOUNT_H

typedef struct {
    char accountNumber[12];
    char holderName[64];
    unsigned int pinHash;
    double balance;
    int isLocked;
} Account;

#endif