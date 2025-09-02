#include <stdio.h>

int main (void) {

    int n;
    int contadorPar = 0;
    int contadorPositivo = 0;
    int contadorNegativo = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            contadorPar++;
        }
        if (n > 0) {
            contadorPositivo++;
        } else if (n < 0) {
            contadorNegativo++;
        }
    }

    printf("%d valor(es) par(es)\n", contadorPar);
    printf("%d valor(es) impar(es)\n", 5 - contadorPar);
    printf("%d valor(es) positivo(s)\n", contadorPositivo);
    printf("%d valor(es) negativo(s)\n", contadorNegativo);

    return 0;
}