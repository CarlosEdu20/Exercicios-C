#include <stdio.h>

int main() {
    float vet[10], resultado[10];

    printf("Digite 10 números: \n");

    for (int i = 0; i < 10; i++) {
        scanf("%f", &vet[i]);

    }
    for (int i = 1; i < 10; i++) {
        if (vet[i] == vet[i - 1]) {
            printf("%.2f ", vet[i]);
        }

    }







    return 0;
}