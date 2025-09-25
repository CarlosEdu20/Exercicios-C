#include <stdio.h>

void main () {
    int num, i, j, m = 0, acumulador = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        for (j = 0; j <= m; j++) {
            printf("%d", acumulador);
            acumulador++;

        }
        m++;
        printf("\n");
    }






}
