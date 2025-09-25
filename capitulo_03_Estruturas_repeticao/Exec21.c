#include <stdio.h>

void main() {
    int num = 0, maior = 0, cont = 0, qtd_num;
    printf("Digite a quantidade de números a ser lida: ");
    scanf("%d", &qtd_num);

    for (int i = 1; i <= qtd_num; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
            cont++;
        }

    }
    printf("O maior numero eh: %d\n", maior);
    printf("Quantidade de números maiores lido %d", cont);








}