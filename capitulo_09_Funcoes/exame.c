#include <stdio.h>

float mostrarGlicose(float valor_glicose) {
    if (valor_glicose <= 100) {
        return printf("Classificação: Normal\n");
    } else if (valor_glicose > 100 && valor_glicose <= 140) {
        return printf("Classificação: Elevado\n");
    } else {
        return printf("Classificação: Diabetes\n");
    }
}
float mostrarTrigliceridos(float valor_trigliceridos) {
    if (valor_trigliceridos <= 200) {
        return printf("Classificação: Desejável\n");
    }
    else {
        return printf("Classificação: Aumentado\n");
    }

}

float mostrarColesterol(float valor_colesterol) {
    if (valor_colesterol <= 200) {
        return printf("Classificação: Desejável\n");
    }
    else if (valor_colesterol > 200 && valor_colesterol <= 240) {
        return printf("Classificação: Limiar\n");
    }
    else {
        return printf("Classificação: Elevado\n");
    }
}

int main () {

    float valor_glicose, valor_triglicerídos, valor_colesterol;
    printf("Medida da glicose: ");
    scanf("%f", &valor_glicose);
    mostrarGlicose(valor_glicose);
    printf("Medida de triglicerídos: ");
    scanf("%f", &valor_triglicerídos);
    mostrarTrigliceridos(valor_triglicerídos);
    printf("Medida do colesterol: ");
    scanf("%f", &valor_colesterol);
    mostrarColesterol(valor_colesterol);





}