#include <stdio.h>


int main () {
    int ordem, linha, coluna;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &ordem);
    float matriz[ordem][ordem], soma = 0, quadrado[ordem][ordem];

    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);

            if (matriz [i][j] > 0.0) {
                soma += matriz[i][j];
            }
        }
    }
    printf("SOMA DOS POSITIVOS: %.1f\n", soma);
    printf("\nEscolha uma linha: ");
    scanf("%d", &linha);

    printf("LINHA ESCOLHIDA: ");
    for (int i = 0; i < ordem; i++) {
        printf("%.1f ", matriz[linha][i]);
    }

    printf("\n");
    printf("\nEscolha uma coluna: ");
    scanf("%d", &coluna);

    printf("COLUNA ESCOLHIDA: ");
    for (int j = 0; j < ordem; j++) {
        printf("%.1f ", matriz[j][coluna]);

    }


    printf("\n");
    printf("\nDIAGONAL PRINCIPAL: ");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            if (i == j) {
                printf("%.1f ", matriz[i][j]);
            }
        }
    }

    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            if (matriz[i][j] < 0.0) {
                quadrado[i][j] = matriz[i][j] * matriz[i][j];
                matriz[i][j] = quadrado[i][j];


            }
        }
    }

    printf("\n");
    printf("\nMATRIZ ALTERADA: \n");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {

            printf("%.1f ", matriz[i][j]);

        }
        printf("\n");
    }








    return 0;
}