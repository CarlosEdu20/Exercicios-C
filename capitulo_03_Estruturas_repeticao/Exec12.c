#include <stdio.h>

int main() {
    int num, somador = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {

        if (num % i == 0) {
            somador += i;
            printf(" %d", i);
        }

    }
    printf("\nSomador: %d", somador);
     printf("\nSomador: %d", somador);




    return 0;
}
