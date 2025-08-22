#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int pessoas;
    int m3;
    int consumoPercapto;
}consumo;

int cmp(const void *a, const void *b) {
    const consumo *c1 = (const consumo*)a;
    const consumo *c2 = (const consumo*)b;
    return c1->consumoPercapto - c2->consumoPercapto;
}

double trunc2(double valor) {
    return floor(valor * 100) / 100.0;
}

int main (void) {

    int n;
    int i = 0;

    while (scanf("%d", &n)) {
        if (n == 0) break;

        consumo* dados = malloc(n * sizeof(consumo));
        double consumoTotal = 0;
        int quantidadePessoas = 0;
    
        i++;

        printf("Cidade# %d\n", i);

        for (int j = 0; j < n; j++) {
            int pessoas, m3;
            scanf("%d %d", &pessoas, &m3);

            int consumoPercapto = m3 / pessoas;

            dados[j].pessoas = pessoas;
            dados[j].m3 = m3;
            dados[j].consumoPercapto = consumoPercapto;

            consumoTotal += m3;
            quantidadePessoas += pessoas;
        }

        qsort(dados, n, sizeof(consumo), cmp);

        int atualConsumo = dados[0].consumoPercapto;
        int somaPessoas = dados[0].pessoas;

        for (int j = 1; j < n; j++) {
            if (dados[j].consumoPercapto == atualConsumo) {
                somaPessoas += dados[j].pessoas;
            } else {
                printf("%d-%d ", somaPessoas, atualConsumo);
                atualConsumo = dados[j].consumoPercapto;
                somaPessoas = dados[j].pessoas;
            }
        }
        printf("%d-%d\n", somaPessoas, atualConsumo);

        printf("\nConsumo medio: %.2f m3.\n\n", trunc2(consumoTotal / quantidadePessoas));

        free(dados);
    }

    return 0;
}