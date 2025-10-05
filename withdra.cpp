#include <stdio.h>
int main() {
    int balance = 50000, withdraw;
    while(balance > 0) {
        printf("Current Balance = %d\n", balance);
        printf("Enter amount to withdraw: ");
        scanf("%d", &withdraw);
        if(withdraw <= balance) {
            balance -= withdraw;
            printf("Withdrawal successful! Remaining Balance = %d\n", balance);
        } else {
            printf("Insufficient balance!\n");
        }
    }
    printf("Account empty. No further withdrawals possible.\n");
    return 0;
}
