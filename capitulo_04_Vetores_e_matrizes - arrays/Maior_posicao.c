#include <stdio.h>

int main() {
    int i = 1, num, maior = 0, posicao = 0;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &num);
    int num2[num];

    while (i <= num) {
        printf("Digite um numero: ");
        scanf("%d", &num2[i]);

        if (num2[i] > maior) {
            maior = num2[i];
            posicao = i - 1;
        }


        i++;
    }
    printf("MAIOR VALOR: %d", maior);
    printf("POSICAO DO MAIOR VALOR\n: %d", posicao);











    return 0;
}