#include <stdio.h>

void SelectionSort (int *v, int n) {
    int i, j, menor, temp;
    for (i = 0; i < n-1; i++) {
        menor = i;
        for (j = i+1; j < n; j++) {
            if (v[j] < v[menor]) {
                menor = j;
            }
        }
        temp = v[i];
        v[i] = v[menor];
        v[menor] = temp;
    }
}

int main (void) {

    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    
    int vetor[3];
    vetor[0] = n1;
    vetor[1] = n2;
    vetor[2] = n3;

    SelectionSort(vetor, 3);

    printf("%d\n", vetor[0]);
    printf("%d\n", vetor[1]);
    printf("%d\n", vetor[2]);

    puts("");

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;
}