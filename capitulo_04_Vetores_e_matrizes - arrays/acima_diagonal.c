#include <stdio.h>

int main () {
    int n, i = 0, j = 0;
    int i,j;
    printf("Qual a ordem da matriz? ");
    scanf("%d", &ordem);
    int matriz[10][10];
    int soma = 0;

    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

        }
    }
    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            if (j > i ) {
                soma += matriz[i][j];
            }
        }
    }
    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d", soma);


    return 0;
}