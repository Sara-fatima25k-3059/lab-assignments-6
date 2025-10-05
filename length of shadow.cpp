#include <stdio.h>
#include <math.h>
int main() {
    double H, theta, L;
    printf("Enter height H: ");
    scanf("%lf", &H);
    printf("Enter angle theta (in radians): ");
    scanf("%lf", &theta);
    L = H / tan(theta);
    printf("Length of shadow = %.2lf\n", L);
    return 0;
}
