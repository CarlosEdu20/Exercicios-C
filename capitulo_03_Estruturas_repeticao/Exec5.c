#include <stdio.h>

int main() {


    int soma =  0;

    for ( int i = 1; i <= 50; i++) {
         soma += 2 * i;
    }
    printf("A soma dos 50 primeiros numeros pares = %d\n", soma);

 return 0;
}
