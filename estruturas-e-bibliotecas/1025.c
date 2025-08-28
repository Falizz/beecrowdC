#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *dados;
    int inicio;
    int fim;
    int qtd;
    int tamanho;
}queue;

queue* iniciarfila(int tamanhoFila){
    queue *f = (queue*)malloc(sizeof(queue));
    f->dados = (int*)malloc(tamanhoFila * sizeof(int));
    f->inicio = 0;
    f->fim = 0;
    f->qtd = 0;
    f->tamanho = tamanhoFila;
    return f;
}

int inqueue (queue* f, int valor){
    if (f->qtd == f->tamanho) return -1;
    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % f->tamanho;
    f->qtd++;
    return 0;
}

int dequeue (queue* f, int* valor){
    if (f->qtd == 0) return -1;
    *valor = f->dados[f->inicio];
    f->inicio = (f->inicio + 1) % f->tamanho;
    f->qtd--;
    return 0;
}

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main (void) {

    int n, q;
    int i = 1;

    while (scanf("%d %d", &n, &q) && n != 0 && q != 0) {
        printf("CASE# %d:\n", i);
        queue *f = iniciarfila(n);
        for (int i = 0; i < n; i++) {
            int valor;
            scanf("%d", &valor);
            inqueue(f, valor);
        }
        qsort(f->dados, f->qtd, sizeof(int), cmp);
        for (int i = 0; i < q; i++) {
            int valor;
            scanf("%d", &valor);
            int encontrado = 0;
            for (int j = 0; j < f->qtd; j++) {
                if (f->dados[j] == valor) {
                    printf("%d found at %d\n", valor, j + 1);
                    break;
                } else if (j == f->qtd - 1) {
                    printf("%d not found\n", valor);
                }
            }
        }
        i++;
    }

    return 0;
}