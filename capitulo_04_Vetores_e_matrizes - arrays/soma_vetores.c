#include <stdio.h>

void main () {
    int valor, i = 0, j = 0;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &valor);
    int vetorA[valor];
    int vetorB[valor];
    int soma[valor];

    printf("Digite os valores do vetor A: \n");
    while (i < valor) {
        scanf("%d", &vetorA[i]);
        i++;

    }
    printf("Digite os valores do vetor B: \n");
    while (j < valor) {
        scanf("%d", &vetorB[j]);
        j++;
    }

    for (i = 0; i < valor; i++) {
        soma[i] = vetorA[i] + vetorB[i];
    }

    printf("Vetor Resultante: \n");
    for (i = 0; i < valor; i++) {
        printf("%d \n", soma[i]);
    }














}


