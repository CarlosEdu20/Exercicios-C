#include <stdio.h>

int main() {
    int i = 0, num, maior = 0, posicao = 0;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &num);
    float num2[num];

    while (i < num) {
        printf("Digite um numero: ");
        scanf("%f", &num2[i]);
        i++;
    }

    maior = num2[0];
    for (i = 1; i < num - 1; i++) {
        if (num2[i] > maior) {
            maior = num2[i];
            posicao = i - 1;
        }
    }
    printf("\n");
    printf("MAIOR VALOR = %d\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d", posicao);











    return 0;
}