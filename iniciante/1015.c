#include <stdio.h>
#include <math.h>

struct ponto {
    double x;
    double y;
};

double distancia (struct ponto a, struct ponto b){
    double valor = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
    return valor;
}

int main (void) {
    struct ponto p1, p2;
    scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
    double distanciaPontos = distancia(p1, p2);
    printf("%.4lf\n", distanciaPontos);
    return 0;
}