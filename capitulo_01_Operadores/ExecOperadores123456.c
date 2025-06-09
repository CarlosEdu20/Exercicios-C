#include <stdio.h>


void main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    int antecessor = num -1;
    int sucessor =  num + 1;
    printf("O sucessor do número %d é %d\n", num, sucessor );
    printf("O antecessor do número %d é %d", num, antecessor );

    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);
    float Quinta = num * 1.0/5.0;
    printf("O numero digitado foi: %.2f", Quinta);

    int num1, num2, num3;
    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    printf("Insira o terceiro numero: ");
    scanf("%d", &num3);
    int soma =  num1 + num2 + num3;
    printf("Soma = %d\n", soma);

    float num1, num2, num3, num4;
    printf("Digite quatro números: ");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    scanf("%f", &num4);
    float media =  (num1 + num2 + num3 + num4) / 4.0;
    printf("A media é %f", media);


    int ano_atual, idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    int ano_nasc = ano_atual - idade;
    printf("O ano que você nasceu foi %d", ano_nasc);

    float velocidade;
    printf("Insira o velocidade: ");
    scanf("%f", &velocidade);
    float ms = velocidade / 3.6;
    printf("Velocidade em metros por segundo: %f\n", ms);






}