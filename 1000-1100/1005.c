#include <stdio.h>

int main (void) {
    double a, b;
    scanf("%lf %lf", &a, &b);
    a *= 3.5;
    b *= 7.5;
    double MEDIA = (a + b) / 11.0;
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}