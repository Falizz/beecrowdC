#include <stdio.h>

int main (void) {

    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    horaInicial *= 60;
    horaFinal *= 60;

    int tempoInicial = horaInicial + minutoInicial;
    int tempoFinal = horaFinal + minutoFinal;

    if (tempoFinal <= tempoInicial){
        tempoFinal += 24 * 60;
    }

    int duracao = tempoFinal - tempoInicial;
    int horas = duracao / 60;
    int minutos = duracao % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}