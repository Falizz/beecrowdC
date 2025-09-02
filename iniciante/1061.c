#include <stdio.h>

int main (void) {

    int diaInicio, horaInicio, minutoInicio, segundoInicio;
    int diaFinal, horaFinal, minutoFinal, segundoFinal;

    scanf(
        "Dia %d\n"
        "%d : %d : %d\n"
        "Dia %d\n"
        "%d : %d : %d",
        &diaInicio, 
        &horaInicio, &minutoInicio, &segundoInicio, 
        &diaFinal, 
        &horaFinal, &minutoFinal, &segundoFinal
    );

    diaInicio *= 24 * 60 * 60;
    diaFinal *= 24 * 60 * 60;

    horaInicio *= 60 * 60;
    horaFinal *= 60 * 60;

    minutoInicio *= 60;
    minutoFinal *= 60;

    int tempoInicio = diaInicio + horaInicio + minutoInicio + segundoInicio;
    int tempoFinal = diaFinal + horaFinal + minutoFinal + segundoFinal;

    int duracao = tempoFinal - tempoInicio;

    int dias = duracao / (24 * 60 * 60);
    duracao %= (24 * 60 * 60);
    int horas = duracao / (60 * 60);
    duracao %= (60 * 60);
    int minutos = duracao / 60;
    int segundos = duracao % 60;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}