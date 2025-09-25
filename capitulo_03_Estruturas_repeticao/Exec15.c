#include <stdio.h>

void main() {
    int num = 0, i = 0 , menor = 0, maior = 0;

    while (num >= 0) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > maior && num >= 0) {
            maior = num;

        }
        if (num < maior && num >= 0) {
            menor = num;
        }
        i++;

    }
        printf("O maior número digitado foi: %d\n", maior);
        printf("O menor número digitado foi: %d", menor);









}
