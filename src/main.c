#include <stdio.h>
#include "account.h"

int main (void) {

    Account a1 = {
        "12000012345",
        "Jan Doe",
        1234,
        1000.00,
        0
    };

    printf("%s, %s, %d, %f, %d", a1.accountNumber, a1.holderName, a1.pinHash, a1.balance, a1.isLocked);
    return 0;
}