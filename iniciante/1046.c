#include <stdio.h>

int main (void) {

    int horaInicio, horaFinal;
    scanf("%d %d", &horaInicio, &horaFinal);

    if (horaInicio < horaFinal) {
        printf("O JOGO DUROU %d HORA(S)\n", horaFinal - horaInicio);
    } else {
        printf("O JOGO DUROU %d HORA(S)\n", 24 - (horaInicio - horaFinal));
    }

    return 0;
}