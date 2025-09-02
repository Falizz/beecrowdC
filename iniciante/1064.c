#include <stdio.h>

int main (void) {

    double n;
    double soma = 0;
    int contador = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%lf", &n);
        if (n > 0) {
            contador++;
            soma += n;
        }
    }

    printf("%d valores positivos\n", contador);
    printf("%.1lf\n", soma / contador);

    return 0;
}