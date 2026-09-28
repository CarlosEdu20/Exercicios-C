#include <stdio.h>

float mostrarGlicose(float valor_glicose) {
    if (valor_glicose <= 100) {
        return printf("Normal\n");
    } else if (valor_glicose > 120 && valor_glicose <= 140) {
        return printf("Elevado\n");
    } else {
        return printf("Diabetes\n");
    }
}

int main() {
    float valor_glicose;
    printf("Digite o valor da glicose: ");
    scanf("%f", &valor_glicose);
    char dignostico =  mostrarGlicose(valor_glicose);

    printf("Classificação: %s", dignostico);







    return 0;
}