#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerador;
    int denominador;
} fracao;

typedef struct {
    fracao f1;
    char operacao;
    fracao f2;
    fracao resultado;
    fracao simplificada;
} operacao;

fracao simplificada (fracao a) {
    int mdc = 1;
    for (int i = 1; i <= abs(a.numerador) && i <= abs(a.denominador); i++) {
        if (a.numerador % i == 0 && a.denominador % i == 0) {
            mdc = i;
        }
    }
    a.numerador /= mdc;
    a.denominador /= mdc;
    return a;
}

int main (void) {
    int n;
    scanf("%d", &n);

    operacao op;

    for (int i = 0; i < n; i++) {
        scanf("%d / %d %c %d / %d",
            &op.f1.numerador, &op.f1.denominador,
            &op.operacao,
            &op.f2.numerador, &op.f2.denominador);

        if (op.operacao == '+') {
            op.resultado.numerador = (op.f1.numerador * op.f2.denominador) + (op.f2.numerador * op.f1.denominador);
            op.resultado.denominador = op.f1.denominador * op.f2.denominador;
        } else if (op.operacao == '-') {
            op.resultado.numerador = (op.f1.numerador * op.f2.denominador) - (op.f2.numerador * op.f1.denominador);
            op.resultado.denominador = op.f1.denominador * op.f2.denominador;
        } else if (op.operacao == '*') {
            op.resultado.numerador = op.f1.numerador * op.f2.numerador;
            op.resultado.denominador = op.f1.denominador * op.f2.denominador;
        } else if (op.operacao == '/') {
            op.resultado.numerador = op.f1.numerador * op.f2.denominador;
            op.resultado.denominador = op.f1.denominador * op.f2.numerador;
        }

        op.simplificada = simplificada(op.resultado);

        printf("%d/%d = %d/%d\n", op.resultado.numerador, op.resultado.denominador, op.simplificada.numerador, op.simplificada.denominador);
    }

    return 0;
}