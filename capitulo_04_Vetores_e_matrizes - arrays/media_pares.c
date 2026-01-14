#include <stdio.h>

int main() {
    int elementos, i = 0, j = 0;
    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &elementos);
    int numero[elementos], soma = 0;
    float media;


    while (i < elementos) {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);

            if (numero[i] % 2 == 0) {
                j++;
                soma += numero[i];
                media = soma / j;
            }

            if  (i == elementos -1) {
                if (media >= 0) {
                    printf("MEDIA = %.2f\n", media);
                }

                 else{
                    printf("NENHUM NUMERO PAR");
                }

            }

        i++;
    }












    return 0;
}