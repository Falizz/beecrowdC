#include <stdio.h>

int main (void) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    a *= 2;
    b *= 3;
    c *= 5;
    double MEDIA = (a + b + c) / 10.0;
    printf("MEDIA = %.1lf\n", MEDIA);
    return 0;
}