#include <stdio.h>

int main() {
    int N, i = 0;
    printf("Digite um número natural: " );
    scanf("%d", &N);

    while (i <= N) {
        printf("%d ", i);
        i++;
    }


    return 0;
}
