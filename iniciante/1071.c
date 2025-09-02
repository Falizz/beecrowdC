#include <stdio.h>

int main (void)
{

    int x, y;
    scanf("%d %d", &x, &y);

    int soma = 0;

    for (int i = y + 1; i < x; i += 2) {
        if (i % 2 == 0) {
            i++;
        }
        soma += i;
    }

    printf("%d\n", soma);

    return 0;
}