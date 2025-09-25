#include <stdio.h>

int main() {
    float S = 0.0;
    int numerador = 1;

    for (int denominador = 1; denominador <= 55; denominador++) {
        S += (float)numerador / denominador;
        numerador += 2;

        printf("O valor de S é: %.4f\n", S);

        return 0;
    }
}
