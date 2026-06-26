#include <stdio.h>

int main() {
    int vetor[100];
    int i = 0;
    int num = 1;

    while (i < 100) {
        if (num % 7 != 0) {
            vetor[i] = num;
            i++;
        }
        num++;
    }

    for (int j = 0; j < 100; j++) {
        printf("Posicao [%d] = %d\n", j, vetor[j]);
    }

    return 0;
}