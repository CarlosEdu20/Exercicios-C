#include <stdio.h>


int main() {
    int qtd_num, i = 0;;
    printf("Quantos números você vai digitar? ");
    scanf("%d", &qtd_num);
    int num[qtd_num], num_negativo[qtd_num];

    while (i < qtd_num) {
        printf("Digite um número: ");
        scanf("%d", &num[i]);
        if (num[i] < 0) {
            num_negativo[i] = num[i];
            printf("Numeros negativos: %d\n", num_negativo[i]);
        }

        i++;

    }

    printf("NÚMEROS NEGATIVOS: \n");
    for (int j = 0; j < qtd_num; j++) {
        if (num_negativo[j] < 0) {
            printf("Numeros negativos: %d\n", num_negativo[j]);
        }



     }



    return 0;
}