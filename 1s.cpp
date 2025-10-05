#include <stdio.h>
int main() {
    int num, count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num) {
        if(num & 1) count++;
        num >>= 1;
    }
    printf("Number of 1s in binary = %d\n", count);
    return 0;
}
