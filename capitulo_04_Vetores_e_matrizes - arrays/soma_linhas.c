#include <stdio.h>


int main() {
    int matriz_linha = 0, matriz_coluna = 0, incrementador = 1;
    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &matriz_linha);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &matriz_coluna);
    float matriz[matriz_linha][matriz_coluna];
    float soma[matriz_linha];


    for (int i = 0; i < matriz_linha; i++) {
        printf("Digite os elementos da %da. linha: \n", incrementador);
        for (int j = 0; j < matriz_coluna; j++) {
            scanf("%f", &matriz[i][j]);

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
        printf("%.2f\n", soma[i]);
    }

    return 0;
}