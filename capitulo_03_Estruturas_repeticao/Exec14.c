#include <stdio.h>

void main() {
    int num, fn, f1, f2;
    printf("Digite um da sequencia de fibonacci: ");
    scanf("%d", &num);

    if (num >= 0) {
        f1 = 1;
        f2 = 0;
        for (int i = 0; i <= num; i++) {
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
            printf("%d ", fn);
        }




    }








}
