#include <stdio.h>
#include <string.h>

int main (void) {

    char classe1[20], classe2[20], classe3[20];

    fgets(classe1, sizeof(classe1), stdin);
    fgets(classe2, sizeof(classe2), stdin);
    fgets(classe3, sizeof(classe3), stdin);

    classe1[strcspn(classe1, "\n")] = 0;
    classe2[strcspn(classe2, "\n")] = 0;
    classe3[strcspn(classe3, "\n")] = 0;

    if (strcmp(classe1, "vertebrado") == 0) {
        if (strcmp(classe2, "ave") == 0) {
            if (strcmp(classe3, "carnivoro") == 0) {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else if (strcmp(classe2, "mamifero") == 0) {
            if (strcmp(classe3, "onivoro") == 0) {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else if (strcmp(classe1, "invertebrado") == 0) {
        if (strcmp(classe2, "inseto") == 0) {
            if (strcmp(classe3, "hematofago") == 0) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else if (strcmp(classe2, "anelideo") == 0) {
            if (strcmp(classe3, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
