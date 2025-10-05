#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, sum=0, digit, n=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    int check = num;
    while(check != 0) {
        check /= 10;
        n++;
    }

    check = num;
    while(check != 0) {
        digit = check % 10;
        sum += pow(digit, n);
        check /= 10;
    }

    if(sum == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is NOT an Armstrong number\n", num);
    return 0;
}
