#include <stdio.h>

int quantidadeCedulas (int *valor, int valorCedula){
    int valorAtual = *valor;
    *valor = *valor % valorCedula;
    return valorAtual / valorCedula;
}

int main() {
    double valor;
    scanf("%lf", &valor);

    int valorInteiro = valor * 100;

    printf("NOTAS:\n");
    int cedulas = quantidadeCedulas(&valorInteiro, 10000);
    printf("%d nota(s) de R$ 100.00\n", cedulas);
    cedulas = quantidadeCedulas(&valorInteiro, 5000);
    printf("%d nota(s) de R$ 50.00\n", cedulas);
    cedulas = quantidadeCedulas(&valorInteiro, 2000);
    printf("%d nota(s) de R$ 20.00\n", cedulas);
    cedulas = quantidadeCedulas(&valorInteiro, 1000);
    printf("%d nota(s) de R$ 10.00\n", cedulas);
    cedulas = quantidadeCedulas(&valorInteiro, 500);
    printf("%d nota(s) de R$ 5.00\n", cedulas);
    cedulas = quantidadeCedulas(&valorInteiro, 200);
    printf("%d nota(s) de R$ 2.00\n", cedulas);

    printf("MOEDAS:\n");
    cedulas = quantidadeCedulas(&valorInteiro, 100);
    printf("%d moeda(s) de R$ 1.00\n", cedulas);
    cedulas = quantidadeCedulas(&valorInteiro, 50);
    printf("%d moeda(s) de R$ 0.50\n", cedulas);
    cedulas = quantidadeCedulas(&valorInteiro, 25);
    printf("%d moeda(s) de R$ 0.25\n", cedulas);
    cedulas = quantidadeCedulas(&valorInteiro, 10);
    printf("%d moeda(s) de R$ 0.10\n", cedulas);
    cedulas = quantidadeCedulas(&valorInteiro, 5);
    printf("%d moeda(s) de R$ 0.05\n", cedulas);
    cedulas = quantidadeCedulas(&valorInteiro, 1);
    printf("%d moeda(s) de R$ 0.01\n", cedulas);

    return 0;
}