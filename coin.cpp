#include <stdio.h>

int main() {
    int amount, count, total = 0;

    printf("Enter amount in cents: ");
    scanf("%d", &amount);

    count = amount / 25;
    amount %= 25;
    if (count > 0) {
        printf("%d coin(s) of 25\n", count);
        total += count;
    }

    count = amount / 10;
    amount %= 10;
    if (count > 0) {
        printf("%d coin(s) of 10\n", count);
        total += count;
    }

    count = amount / 5;
    amount %= 5;
    if (count > 0) {
        printf("%d coin(s) of 5\n", count);
        total += count;
    }

    count = amount;
    if (count > 0) {
        printf("%d coin(s) of 1\n", count);
        total += count;
    }

    printf("Minimum number of coins = %d\n", total);

    return 0;
}
