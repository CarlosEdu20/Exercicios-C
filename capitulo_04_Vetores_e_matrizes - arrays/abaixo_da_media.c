#include <stdio.h>

int main () {
    int n, i = 0;
    printf("Quantos elementos vai ter o vetor?: ");
    scanf("%d", &valor);
    float numeros[valor];
    float soma = 0.0;

    while (i < valor) {
        printf("Digite um numero: ");
        scanf("%f", &numeros[i]);
        i++;
    }
    for (i = 0; i < valor; i++) {
        soma += numeros[i];
    }


    float media = soma / valor;

    printf("\n");
    printf("MEDIA DO VETOR = %.2f\n", media);
    printf("Elementos abaixo da média: \n");
    for (i = 0; i < valor; i++) {
        if (numeros[i] < media) {
            printf("%.1f \n", numeros[i]);

        }
    }

    return 0;
}