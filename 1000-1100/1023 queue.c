#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int pessoas;
    int m3;
    int consumoPercapto;
}consumo;

typedef struct {
    consumo *dados;
    int inicio;
    int fim;
    int qtd;
    int tamanho;
}queue;

queue* iniciarfila(int tamanhoFila){
    queue *f = (queue*)malloc(sizeof(queue));
    f->dados = (consumo*)malloc(tamanhoFila * sizeof(consumo));
    f->inicio = 0;
    f->fim = 0;
    f->qtd = 0;
    f->tamanho = tamanhoFila;
    return f;
}

int inqueue (queue* f, consumo valor){
    if (f->qtd == f->tamanho) return -1;
    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % f->tamanho;
    f->qtd++;
    return 0;
}

int dequeue (queue* f, consumo* valor){
    if (f->qtd == 0) return -1;
    *valor = f->dados[f->inicio];
    f->inicio = (f->inicio + 1) % f->tamanho;
    f->qtd--;
    return 0;
}

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

        if (n == 0){
            break;
        }

        double consumoTotal = 0;
        int quantidadePessoas = 0;
    
        i++;
        printf("Cidade# %d:\n", i);
        queue* f = iniciarfila(n);
        
        for (int j = 0; j < n; j++) {
            int pessoas, m3;
            scanf("%d %d", &pessoas, &m3);

            int consumoPercapto = (pessoas == 0) ? 0 : m3 / pessoas;

            consumo c;
            c.pessoas = pessoas;
            c.m3 = m3;
            c.consumoPercapto = consumoPercapto;

            consumoTotal += m3;
            quantidadePessoas += pessoas;

            inqueue(f, c);
        }

        qsort(f->dados, f->qtd, sizeof(consumo), cmp);

        int atualConsumo = f->dados[0].consumoPercapto;
        int somaPessoas = f->dados[0].pessoas;

        for (int j = 1; j < f->qtd; j++) {
            if (f->dados[j].consumoPercapto == atualConsumo) {
                somaPessoas += f->dados[j].pessoas;
            } else {
                printf("%d-%d ", somaPessoas, atualConsumo);
                atualConsumo = f->dados[j].consumoPercapto;
                somaPessoas = f->dados[j].pessoas;
            }
        }
        printf("%d-%d\n", somaPessoas, atualConsumo);

        printf("\nConsumo medio: %.2f m3.\n\n", trunc2(consumoTotal / quantidadePessoas));

        free(f->dados);
        free(f);
    }

    return 0;
}