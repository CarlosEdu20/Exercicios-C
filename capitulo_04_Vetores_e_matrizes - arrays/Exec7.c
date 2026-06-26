#include <stdio.h>


int main() {
    int v[10];
    int maior, menor;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &v[i]);
        maior = v[0];
        menor = v[0];
    }
    for (int i = 0; i < 10; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
        if (v[i] < menor) {
            menor = v[i];
        }
    }
    printf("O maior número digitado foi: %d\n", maior);
    printf("O menor número digitado foi: %d\n", menor);





    return 0;
}