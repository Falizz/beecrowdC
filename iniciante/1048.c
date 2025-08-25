#include <stdio.h>

int main (void) {

    double salario;
    scanf("%lf", &salario);

    double reajuste;

    if (salario <= 400){
        reajuste = salario * 0.15;
    } else if (salario <= 800){
        reajuste = salario * 0.12;
    } else if (salario <= 1200){
        reajuste = salario * 0.10;
    } else if (salario <= 2000){
        reajuste = salario * 0.07;
    } else {
        reajuste = salario * 0.04;
    }

    printf("Novo salario: %.2lf\n", salario + reajuste);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0lf %%\n", (reajuste / salario) * 100);

    return 0;
}