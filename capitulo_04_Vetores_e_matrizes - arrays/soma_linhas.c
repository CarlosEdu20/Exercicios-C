#include <stdio.h>


int main() {
    int n, col, lin, i = 0, j = 0;
    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &matriz_linha);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &matriz_coluna);
    int matriz[matriz_linha][matriz_coluna];
    int soma[matriz_linha];


    for (int i = 0; i < matriz_linha; i++) {
        printf("Digite os elementos da %da. linha: \n", incrementador);
        for (int j = 0; j < matriz_coluna; j++) {
            scanf("%d", &matriz[i][j]);

        }
        incrementador++;
    }

    for (int i = 0; i < matriz_linha; i++) {
        soma[i] = 0;
        for (int j = 0; j < matriz_coluna; j++) {
            soma[i] += matriz[i][j];

        }
    }


    printf("Vetor gerado: \n");
    for (int i = 0; i < matriz_linha; i++) {
        printf("%d \n", soma[i]);
    }

    return 0;
}