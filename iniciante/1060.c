#include <stdio.h>

int main (void) {

    double n;
    int contador = 0;

    for (int i = 0; i < 6; i++){
        scanf("%lf", &n);
        if (n > 0){
            contador++;
        }
    }

    printf("%d valores positivos\n", contador);

    return 0;
}