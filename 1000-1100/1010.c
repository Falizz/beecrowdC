#include <stdio.h>

int main (void) {
    int codigoPeca1, numeroPeca1;
    double valorUnitarioPeca1;
    int codigoPeca2, numeroPeca2;
    double valorUnitarioPeca2;
    scanf("%d %d %lf", &codigoPeca1, &numeroPeca1, &valorUnitarioPeca1);
    scanf("%d %d %lf", &codigoPeca2, &numeroPeca2, &valorUnitarioPeca2);
    double valorPagar = (numeroPeca1 * valorUnitarioPeca1) + (numeroPeca2 * valorUnitarioPeca2);
    printf("VALOR A PAGAR: R$ %.2lf\n", valorPagar);
    return 0;
}