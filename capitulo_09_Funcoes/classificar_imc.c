#include <stdio.h>


float calculoIMC(float peso, float altura) {
    float IMC = peso / (altura * altura);

    if (IMC < 20) {
        return printf("Resultado do IMC: abaixo do peso");
    }
    else if (IMC >= 20 && IMC <= 25 ) {
        return printf("Resultado do IMC: peso normal");
    }
    else if (IMC > 25 && IMC <= 30 ) {
        return printf("Resultado do IMC: sobre peso");
    }
    else {
        return printf("Resultado do IMC: Obeso");
    }
}


int main() {
    float peso, altura;
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    calculoIMC(peso, altura);







    return 0;
}