#include <stdio.h>

int quantidadeCedulas (int *valor, int valorCedula){
    int valorAtual = *valor;
    *valor = *valor % valorCedula;
    return valorAtual / valorCedula;
}

int main() {
    int valor;
    scanf("%d", &valor);
    printf("%d\n", valor);

    int cedulas = quantidadeCedulas(&valor, 100);
    printf("%d nota(s) de R$ 100,00\n", cedulas);

    cedulas = quantidadeCedulas(&valor, 50);
    printf("%d nota(s) de R$ 50,00\n", cedulas);

    cedulas = quantidadeCedulas(&valor, 20);
    printf("%d nota(s) de R$ 20,00\n", cedulas);

    cedulas = quantidadeCedulas(&valor, 10);
    printf("%d nota(s) de R$ 10,00\n", cedulas);

    cedulas = quantidadeCedulas(&valor, 5);
    printf("%d nota(s) de R$ 5,00\n", cedulas);

    cedulas = quantidadeCedulas(&valor, 2);
    printf("%d nota(s) de R$ 2,00\n", cedulas);
    
    cedulas = quantidadeCedulas(&valor, 1);
    printf("%d nota(s) de R$ 1,00\n", cedulas);

    return 0;
}