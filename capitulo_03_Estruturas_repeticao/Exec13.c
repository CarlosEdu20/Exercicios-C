#include <stdio.h>

void main() {
    int somador = 0;


    for (int i = 1; i <= 1000; i++) {

        if (i % 3 == 0 || i % 5 == 0) {
            somador += i;
            printf(" %d", i);
        }

    }
    printf("\nA soma dos números naturais abaixo de mil é %d", somador);


}
