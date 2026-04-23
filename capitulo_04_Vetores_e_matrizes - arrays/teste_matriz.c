#include <stdio.h>

int main() {
    int m, n, i = 0, j = 0;
    int i, j;
    printf("Imprimindo a primeira linha da matriz: \n");
    for (i = 0; i < 3; i++) {
        printf("%d ", mat[0][i]);
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}