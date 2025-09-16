#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d ", 2*i + 1);
    }

    return 0;
}
