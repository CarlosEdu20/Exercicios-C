#include  <stdio.h>
#include <stdlib.h>

int main() {
    int ordem, qtd_negativos = 0;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &ordem);
    int matriz[ordem][ordem];


    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

        }
    }

    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {

            if (matriz[i][j] < 0) {
                qtd_negativos++;
            }

        }
    }
    printf("DIAGONAL PRINCIPAL: \n");
    for (int i = 0; i < ordem; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
    printf("QUANTIDADE DE NEGATIVOS = %d", qtd_negativos);


    return 0;
}