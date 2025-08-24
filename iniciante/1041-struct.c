#include <stdio.h>

typedef struct {
    double x;
    double y;
} coordenadas;

int main (void) {

    coordenadas p1;
    scanf("%lf %lf", &p1.x, &p1.y);

    if (p1.x == 0 && p1.y == 0) {
        printf("Origem\n");
    } else if (p1.x == 0) {
        printf("Eixo Y\n");
    } else if (p1.y == 0) {
        printf("Eixo X\n");
    } else if (p1.x > 0 && p1.y > 0) {
        printf("Q1\n");
    } else if (p1.x < 0 && p1.y > 0) {
        printf("Q2\n");
    } else if (p1.x < 0 && p1.y < 0) {
        printf("Q3\n");
    } else {
        printf("Q4\n");
    }

    return 0;
}