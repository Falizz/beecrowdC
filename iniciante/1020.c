#include <stdio.h>

int main (void) {
    int idadeDias;
    scanf("%d", &idadeDias);
    
    int idadeAnos = idadeDias / 365;
    idadeDias = idadeDias % 365;

    int idadeMeses = idadeDias / 30;
    idadeDias = idadeDias % 30;

    printf("%d ano(s)\n", idadeAnos);
    printf("%d mes(es)\n", idadeMeses);
    printf("%d dia(s)\n", idadeDias);

    return 0;
}