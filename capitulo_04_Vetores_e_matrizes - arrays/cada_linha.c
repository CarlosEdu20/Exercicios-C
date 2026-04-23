#include <stdio.h>


int main() {
    int n, col, lin, i = 0, j = 0;
    printf("Qual a ordem da matriz? ");
    scanf("%d", &ordem);
    int matriz[ordem][ordem];
    int maior[ordem];

    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < ordem; i++) {
        maior[i] = matriz[i][0];
        for (int j = 0; j < ordem; j++) {
            if (matriz[i][j] > maior[i]) {
                maior[i] = matriz[i][j];
            }
        }
    }
    printf("MAIOR ELEMENTO DE CADA LINHA: \n");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {

                if (maior[i] == matriz[i][j])
                  printf("%d \n", maior[i]);

        }
    }

    return 0;
}