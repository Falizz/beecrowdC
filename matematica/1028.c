#include <stdio.h>

int mdc (int a, int b)
{
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int main (void)
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int f1, f2;
        scanf("%d %d", &f1, &f2);

        int maior = (f1 > f2) ? f1 : f2;
        int menor = (f1 < f2) ? f1 : f2;
        int nmdc = (f1 % f2 == 0) ? f2 : mdc(maior, menor % maior);

        printf("%d\n", nmdc);
    }

    return 0;
}