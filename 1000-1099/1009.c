#include <stdio.h>

int main (void) {
    char nomeVendedor[100];
    scanf("%s", nomeVendedor);
    double salarioFixo, totalVendas;
    scanf("%lf %lf", &salarioFixo, &totalVendas);
    double comissao = totalVendas * 0.15;
    double salarioTotal = salarioFixo + comissao;
    printf("TOTAL = R$ %.2lf\n", salarioTotal);
    return 0;
}