#include <stdio.h>


int main() {
    int vetor[8], x, y, soma = 0;
    for (int i = 0; i < 8; i++) {
        printf("Digite o valor: ");
        scanf("%d", &vetor[i]);
    }
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    soma = vetor[x] + vetor[y];
    printf("A soma dos valores é: %d\n", soma);







    return 0;
}