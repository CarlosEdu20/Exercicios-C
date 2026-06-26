#include <stdio.h>

int main() {
    int vetor[6] = {1, 0, 5, -2, -5, 7};
    int soma = 0;

    soma = vetor[0] + vetor[1] + vetor[5];
    printf("Soma: %d\n", soma);

    vetor[4] = 100;

    printf("Valores do array:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}