#include <stdio.h>

int main (void)
{

    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        if (i % 2 == 0) {
            printf("%d^2 = %d\n", i, i * i);
        }
    }

    return 0;
}