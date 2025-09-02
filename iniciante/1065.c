#include <stdio.h>

int main (void) {

    int n;
    int contador = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            contador++;
        }
    }

    printf("%d valores pares\n", contador);

    return 0;
}