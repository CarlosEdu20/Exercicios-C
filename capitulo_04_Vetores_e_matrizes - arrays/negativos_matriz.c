#include <stdio.h>


int main() {
    int coluna, linha, i = 0, j = 0;

    printf("Qual a quantidade de linhas da matriz?  ");
    scanf("%d", &linhas);
    printf("Qual a quantidade de colunas da matriz?  ");
    scanf("%d", &colunas);
    int matriz[linhas][colunas];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

        }
    }
    printf("VALORES NEGATIVOS:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] < 0) {
                printf("%d \n", matriz[i][j]);

            }
        }
    }

    return 0;
}