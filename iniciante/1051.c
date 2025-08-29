#include <stdio.h>

int main (void) {

    double renda;
    scanf("%lf", &renda);

    if (renda <= 2000){
        printf("Isento\n");
    } else {
        renda -= 2000;
        double imposto = 0;
        if (renda <= 1000){
            imposto = renda * 0.08;
        } else {
            imposto += 80;
            renda -= 1000;
            if (renda <= 1500){
                imposto += (renda * 0.18);
            } else {
                imposto += 270;
                renda -= 1500;
                imposto += (renda * 0.28);
            }
        }
        printf("R$ %.2lf\n", imposto);
    }

    return 0;
}