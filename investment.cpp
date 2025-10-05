#include <stdio.h>
#include <math.h>
int main() {
    double P, r, A;
    int n, t;
    printf("Enter principal (P): ");
    scanf("%lf", &P);
    printf("Enter rate (r): ");
    scanf("%lf", &r);
    printf("Enter times compounded per year (n): ");
    scanf("%d", &n);
    printf("Enter years (t): ");
    scanf("%d", &t);
    A = P * pow(1 + r/n, n*t);
    printf("Future value = %.2lf\n", A);
    return 0;
}
