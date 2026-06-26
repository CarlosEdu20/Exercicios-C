#include <stdio.h>



int main() {
    float vet[10];

    printf("Digite 10 números diferentes: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vet[i]);

       for (int j = 0; j < 10; j++) {
            if (i != j && vet[i] == vet[j]) {
                printf("Número repetido! Digite um número diferente: \n");
                i--;
                break;
            }
       }
    }
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vet[i]);
    }






    return 0;
}