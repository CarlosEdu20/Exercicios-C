#include <stdio.h>

void main() {
    int num, i = 0;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &num);
    int num2[100];
    int qtdPar = 0;


    while (i < num) {
        printf("Digite um numero: ");
        scanf("%d", &num2[i]);
        i++;
    }
    for (int j = 0; j < num; j++) {
            if (num2[j] % 2 == 0) {
                printf("%d ", num2[j]);
                qtdPar++;

            }
    }
    printf("\n");
    printf("QUANTIDADE DE PARES = %d", qtdPar);





}