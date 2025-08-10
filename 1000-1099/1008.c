#include <stdio.h>

int main (void) {
    int nFuncionario, nHorasTrabalhadas;
    double salarioFuncionario;
    scanf("%d %d %lf", &nFuncionario, &nHorasTrabalhadas, &salarioFuncionario);
    double SALARY = salarioFuncionario * nHorasTrabalhadas;
    printf("NUMBER = %d\n", nFuncionario);
    printf("SALARY = U$ %.2lf\n", SALARY);
    return 0;
}