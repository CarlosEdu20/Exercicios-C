#include <stdio.h>

int main() {
    int num;
    int menor = 0;
    int maior = 0;


    for (int i = 1; i<=10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);


    if (num > maior) {
        maior = num;
    }

    if (num < maior) {
        menor = num;
    }


        printf("Número maior: %d\n", maior);
        printf("Número menor: %d\n", menor);





    }












    return 0;
}
