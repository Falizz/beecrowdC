#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);

    int horas = n / 3600; // 3600 segundos em 1 hora
    n = n % 3600;

    int minutos = n / 60; // 60 segundos em 1 minuto
    n = n % 60;

    printf("%d:%d:%d\n", horas, minutos, n);
    
    return 0;
}