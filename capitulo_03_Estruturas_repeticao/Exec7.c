#include <stdio.h>

void main() {

    int i = 1;
    int val, soma = 0;
    while (i<=10) {
        printf("Digite um valor:");
        scanf("%d", &val);
        soma = soma + val;


        i++;
    }
    printf("Soma = %d", soma);



}