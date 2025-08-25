#include <stdio.h>
#include <math.h>

void SelectionSort (double *v, int n) {
    int i, j, maior;
    double temp;
    for (i = 0; i < n-1; i++) {
        maior = i;
        for (j = i+1; j < n; j++) {
            if (v[j] > v[maior]) {
                maior = j;
            }
        }
        temp = v[i];
        v[i] = v[maior];
        v[maior] = temp;
    }
}

int main (void) {

    double v[3];
    scanf("%lf %lf %lf", &v[0], &v[1], &v[2]);
    SelectionSort(v, 3);

    double a = v[0];
    double b = v[1];
    double c = v[2];

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO RETANGULO\n");
        } else if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || b == c || a == c) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}