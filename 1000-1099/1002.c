#include <stdio.h>

int main(void) {
    double pi = 3.14159;
    double r;
    scanf("%lf", &r);
    printf("A=%.4lf\n", pi * r * r);
    return 0;
}