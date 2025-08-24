#include <stdio.h>

typedef struct
{
    int codigo;
    int quantidade;
}lanche;


int main (void) {
    lanche l;
    scanf("%d %d", &l.codigo, &l.quantidade);

    if (l.codigo == 1){
        printf("Total: R$ %.2f\n", l.quantidade * 4.00);
    } else if (l.codigo == 2){
        printf("Total: R$ %.2f\n", l.quantidade * 4.50);
    } else if (l.codigo == 3){
        printf("Total: R$ %.2f\n", l.quantidade * 5.00);
    } else if (l.codigo == 4){
        printf("Total: R$ %.2f\n", l.quantidade * 2.00);
    } else if (l.codigo == 5)
    {
        printf("Total: R$ %.2f\n", l.quantidade * 1.50);
    }
    
    return 0;
}