#include <stdio.h>

int main (void){

    double n1, n2, n3, n4;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    n1 *= 2;
    n2 *= 3;
    n3 *= 4;
    n4 *= 1;

    double media = (n1 + n2 + n3 + n4) / 10;

    printf("Media: %.1lf\n", media);

    if (media >= 7.0){
        printf("Aluno aprovado.\n");
    } else if (media < 5.0){
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");

        double nExame;
        scanf("%lf", &nExame);

        printf("Nota do exame: %.1lf\n", nExame);

        media = (media + nExame) / 2;

        if (media >= 5.0){
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", media);
    }

    return 0;
}