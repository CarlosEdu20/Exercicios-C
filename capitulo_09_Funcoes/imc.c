#include <stdio.h>

float imc(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    float peso, altura, calcu_imc;
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    calcu_imc = imc(peso, altura);
    printf("Seu IMC é: %.2f\n", calcu_imc);









    return 0;
}