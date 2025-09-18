#include <stdio.h>

void main() {
    float num, somador = 0, media = 0;
    int i;


    for (i = 1; i<=10; i++) {
        printf("Digite um número: ");
        scanf("%f", &num);

        if (num >= 0.0) {
            somador += num;
            media = somador / i;
        }

    }
    printf("A media é %.2f", media);

}