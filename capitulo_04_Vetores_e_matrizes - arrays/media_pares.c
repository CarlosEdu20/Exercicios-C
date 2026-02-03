#include <stdio.h>

int main() {
    int elementos, i = 0, j = 0;
    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &elementos);
    int numero[elementos], soma = 0;
    float media = 0.0;

    while (i < elementos) {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
        i++;
    }

    for (i = 0; i < elementos; i++) {
        if (numero[i] % 2 == 0) {
            j++;
            soma += numero[i];
            media = soma / j;
        }
    }
    for (i = 0; i < elementos; i++) {
        if  (i == elementos -1) {
            if (media > 0) {
                printf("MEDIA = %.1f\n", media);
            }
            else{
                printf("NENHUM NUMERO PAR");
            }

        }
    }












    return 0;
}