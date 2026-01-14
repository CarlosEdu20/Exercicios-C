#include <stdio.h>

void main() {
    int num, i = 1;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &num);
    int num2[num];
    int qtdPar = 0;


    while (i <= num) {
        printf("Digite um numero: ");
        scanf("%d", &num2[i - 1]);


        if (num2[i - 1] % 2 == 0) {
            qtdPar++;

        }


        i++;

    }
    for (i = 0; i < num; i++) {

            if (num2[i] % 2 == 0) {
                printf("%d ", num2[i]);


            }
    }
    printf("\n");
    printf("QUANTIDADE DE PARES = %d", qtdPar);





}