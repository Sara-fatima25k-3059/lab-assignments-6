#include <stdio.h>
#include <math.h>
int main() {
    int people;
    double cost;
    printf("Enter number of people: ");
    scanf("%d", &people);
    cost = people * 250.50;
    printf("Minimum cost = %.0f\n", ceil(cost));
    return 0;
}
