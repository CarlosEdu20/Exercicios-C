#include <stdio.h>


void main() {
    float real;
    printf("Digite a quantidade em reais que você que vc quer converter: ");
    scanf("%f", &real);
    float dolar = real / 5.67 ;
    printf("O valor de dolar eh %.2f", dolar);


    float celsius, fahrenheit;
    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius*9.0/5.0)+32.0;
    printf("A temperatura em fahrenheit é %.2f", fahrenheit);

    float angulo_grau;
    const float PI = 3.141592;
    printf("Digite o valor de angulo: ");
    scanf("%f", &angulo_grau);
    float radianos = angulo_grau * PI / 180;
    printf("O valor em radianos é %.2f", radianos);

    float premio = 780000.0; // use ponto para float
    float pessoa1, pessoa2, pessoa3;

    pessoa1 = premio * 46.0 / 100.0;
    pessoa2 = premio * 32.0 / 100.0;
    pessoa3 = premio * 22.0 / 100.0;

    printf("A primeira pessoa ganhou %.2f\n", pessoa1);
    printf("A segunda pessoa ganhou %.2f\n", pessoa2);
    printf("A terceira pessoa ganhou %.2f\n", pessoa3);


    float altura, raio;
    const float pi = 3.141592;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite a raio do cilindro: ");
    scanf("%f", &raio);
    float volume =  pi * (raio * raio) * altura;
    printf("Volume do cilindro: %.2f\n", volume);




}