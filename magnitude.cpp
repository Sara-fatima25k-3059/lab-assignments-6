#include <stdio.h>
#include <math.h>
int main() {
    double I, S;
    printf("Enter intensity I: ");
    scanf("%lf", &I);
    printf("Enter standard reference S: ");
    scanf("%lf", &S);
    double M = log10(I/S);
    printf("Earthquake magnitude = %.2lf\n", M);
    return 0;
}
