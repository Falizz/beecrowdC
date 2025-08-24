#include <stdio.h>

void BubbleSort (int *v, int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (v[j] > v[j+1]) {
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int main (void) {

    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    
    int vetor[3];
    vetor[0] = n1;
    vetor[1] = n2;
    vetor[2] = n3;

    BubbleSort(vetor, 3);

    printf("%d\n", vetor[0]);
    printf("%d\n", vetor[1]);
    printf("%d\n", vetor[2]);

    puts("");

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;
}