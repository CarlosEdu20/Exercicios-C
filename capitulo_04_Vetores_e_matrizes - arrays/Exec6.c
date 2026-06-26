#include <stdio.h>


int main() {
    int vetor[10], qtd_par = 0;


    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);

    }
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            qtd_par++;
        }
    }

 printf("Quantidade de par: %d\n", qtd_par);




    return 0;
}