#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("x2 = %d\n", num<<1);
    printf("x4 = %d\n", num<<2);
    printf("x8 = %d\n", num<<3);
    return 0;
}
