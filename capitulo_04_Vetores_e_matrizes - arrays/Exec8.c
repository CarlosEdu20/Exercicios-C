#include <stdio.h>
#include <sys/types.h>

int main() {
    int v[10], soma = 0, qtd_negativos = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);

    }

    for (int i = 0; i < 10; i++) {

        if (v[i] < 0) {
            qtd_negativos++;
        } else {
            soma += v[i];
        }

    }
    printf("A soma dos números positivos é: %d\n", soma);
    printf("A quantidade de números negativos é: %d\n", qtd_negativos);





    return 0;
}
