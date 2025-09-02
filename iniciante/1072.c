#include <stdio.h>

int main (void)
{

    int n;
    scanf("%d", &n);

    int contador = 0;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x >= 10 && x <= 20) contador++;
    }

    printf("%d in\n", contador);
    printf("%d out\n", n - contador);

    return 0;
}