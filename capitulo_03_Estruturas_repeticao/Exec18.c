#include  <stdio.h>

void main() {
    int num, primo = 1;

    printf("Digite um número para saber se ele é primo ou não: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++) {

        if (i > num / 2) {
            break;
        }
        else if (num % i == 0) {
            primo = 0;
            break;
        }

    }
    if (primo)
        printf("%d é primo.\n", num);
    else
        printf("%d não é primo.\n", num);










}