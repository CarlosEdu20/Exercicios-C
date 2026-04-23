#include <stdio.h>

int main() {
    int n, col, lin, i = 0, j = 0;
    int i, j;
    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d", &linha);
    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &coluna);

    int matrizA[linha][coluna], matrizB[linha][coluna];

    printf("Digite os valores da Matriz A: ");
    printf("\n");
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("Digite os valores da Matriz B: ");
    printf("\n");
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    int matrizc[linha][coluna];
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            matrizc[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Matriz Soma: \n");
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
                printf("%d ", matrizc[i][j]);
        }
        printf("\n");
    }

    return 0;
}