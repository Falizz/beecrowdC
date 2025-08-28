#include <stdio.h>

int main (void) {
    int x;
    double y;
    scanf("%d %lf", &x, &y);
    double combustivelGasto = x / y;
    printf("%.3lf km/l\n", combustivelGasto);
    return 0;
}