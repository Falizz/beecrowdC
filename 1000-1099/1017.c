#include <stdio.h>

int main (void) {
    int horas, velocidadeMedia;
    scanf("%d %d", &horas, &velocidadeMedia);
    double combustivelGasto = (velocidadeMedia * horas) / 12.0;
    printf("%.3lf\n", combustivelGasto); 
    return 0;
}