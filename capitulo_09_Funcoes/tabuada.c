#include <stdio.h>

void mostrarTabuada(float valor){
    int multiplicacao;
    for (int i = 1; i <= 10; i++) {
        multiplicacao = valor * i;
        printf("%d x %d = %d\n", valor, i, multiplicacao);
    }
}

int main() {
    int valor, multiplicacao;
    printf("Você quer a tabuada de qual número? ");
    scanf("%d", &valor);
    mostrarTabuada(valor);









    return 0;
}