#include <stdio.h>

void main () {
    int num;
    float soma = 0;
    int i = 1;
    printf("Quantos numeros voce deseja digitar? ");
    scanf("%d", &num);
    float num2[num];

    while (i <= num) {
        printf("Digite um numero: ");
        scanf("%f", &num2[i - 1]);


        i++;
    }
    for (int k = 1; k <= num; k++) {
        soma += num2[k - 1];

    }
    printf("VALORES: ");
    for (i = 0; i < num; i++) {
        printf("%.1f ", num2[i]);
    }
    printf("\nSOMA = %.2f\n", soma);
    printf("Media = %.2f\n", soma / num);

}