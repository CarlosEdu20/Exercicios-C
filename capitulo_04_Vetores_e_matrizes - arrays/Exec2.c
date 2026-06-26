#include <stdio.h>


int main() {
    int valor[5];

    for (int i = 0; i <= 5; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor[i]);
    }
    printf("Valores digitados invertidos:\n");

    for (int i = 5; i >= 0; i--) {
        printf("%d ", valor[i]);
    }








    return 0;
}