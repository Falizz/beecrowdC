#include <stdio.h>

int main (void) {
    double constante, pi;
    constante = 4/3.0;
    pi = 3.14159;
    double raio;
    scanf("%lf", &raio);
    double volume = constante * pi * raio * raio * raio;
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}