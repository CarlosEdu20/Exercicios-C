#include <stdio.h>

void main() {
    int val[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Insira um valor: ");
        scanf("%d", &val[i]);
    }

    printf("O dados inseridos foram: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", val[i]);
    }



}





