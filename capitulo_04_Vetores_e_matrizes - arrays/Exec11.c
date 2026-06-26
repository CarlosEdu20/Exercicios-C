#include <stdio.h>

int main () {
    float num_origem[20], num_destino[20];
    int qtd_numero;

    printf("Quantos números você quer digitar? ");
    scanf("%d", &qtd_numero);


    for (int i = 0; i < qtd_numero; i++) {
        scanf("%f", &num_origem[i]);
    }

    for (int i = 0; i < qtd_numero; i++) {
        num_destino[i] = num_origem[i] * num_origem[i];
    }
    printf("Lista gerada: \n");

    for (int i = 0; i < qtd_numero; i++) {
        printf("%.2f ", num_destino[i]);
    }







    return 0;
}