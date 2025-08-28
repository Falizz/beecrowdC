#include <stdio.h>
#include <stdlib.h>

int maior (int x, int y) {
    int maiorXY = (x + y + abs(x - y)) / 2;
    return maiorXY;
}

int main (void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int maiorAB = maior(a, b);
    int maiorGeral = maior(maiorAB, c);
    printf("%d eh o maior\n", maiorGeral);
    return 0;
}