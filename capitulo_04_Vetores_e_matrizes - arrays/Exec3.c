#include <stdio.h>

int main() {
    int valor[5];
    float media = 0, soma_media = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor[i]);

        soma_media += valor[i];

        if (i == 4) {
            media = soma_media / (i + 1);
        }

    }
    printf("Valores: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valor[i]);
    }
    printf("\n");
    printf("Media: %.2f\n", media);







    return 0;
}