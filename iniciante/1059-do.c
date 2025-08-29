#include <stdio.h>

int main (void) {

    int n = 2;

    do {
        printf("%d\n", n);
        n += 2;
    } while (n < 101);

    return 0;
}