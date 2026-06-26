#include <stdio.h>


int main() {
    int vetorA[10], vetorB[10], vetorC[10];

    for (int i = 0; i < 10; i++) {
        printf ("Digite o valor do vetor A[%d]: ", i);
        scanf ("%d", &vetorA[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf ("Digite o valor do vetor B[%d]: ", i);
        scanf ("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    for (int i = 0; i < 10; i++) {
        printf ("%d ", vetorC[i]);
    }







    return 0;
}