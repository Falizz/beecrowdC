#include <stdio.h>

int main (void) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;

    areaTriangulo = (a * c) / 2.0;
    printf("TRIANGULO: %.3lf\n", areaTriangulo);

    areaCirculo = c * c * 3.14159;
    printf("CIRCULO: %.3lf\n", areaCirculo);

    areaTrapezio = ((a + b) * c) / 2.0;
    printf("TRAPEZIO: %.3lf\n", areaTrapezio);

    areaQuadrado = b * b;
    printf("QUADRADO: %.3lf\n", areaQuadrado);

    areaRetangulo = a * b;
    printf("RETANGULO: %.3lf\n", areaRetangulo);

    return 0;
}