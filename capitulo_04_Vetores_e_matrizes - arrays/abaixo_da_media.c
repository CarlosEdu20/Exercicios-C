#include <stdio.h>

void main () {
    int valor, i = 0;
    printf("Quantos elementos vai ter o vetor?: ");
    scanf("%d", &valor);
    float numeros[valor];
    float soma = 0.0, media;

    while (i < valor) {
        printf("Digite um numero: ");
        scanf("%f", &numeros[i]);
        soma += numeros[i];
        i++;

    }
    media = soma / valor;
    printf("A media dos numeros e: %.3f\n", media);

    printf("Elementos abaixo da média: \n");
    for (i = 0; i < valor; i++) {
        if (numeros[i] < media) {
            printf("%.2f \n", numeros[i]);

        }
    }









}