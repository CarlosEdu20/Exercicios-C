#include <math.h>
#include <stdio.h>

int main(void) {
    // char opcao;
    // float num1, num2;
    //
    // printf("+ - \tAdição\n");
    // printf("- - \tSubtração\n");
    // printf("* - \tMultiplicação\n");
    // printf("\\ - \tDivisao\n");
    // printf("Digite qual a opção de operação você quer:  ");
    // scanf("%c", &opcao);
    // switch (opcao) {
    //     case '+':
    //         printf("Digite o primeiro número: ");
    //         scanf("%f", &num1);
    //         printf("Digite o segundo número: ");
    //         scanf("%f", &num2);
    //         float soma = num1 + num2;
    //         printf("Soma: %.2f\n", soma);
    //         break;
    //     case '-':
    //         printf("Digite o primeiro número: ");
    //         scanf("%f", &num1);
    //         printf("Digite o segundo número: ");
    //         scanf("%f", &num2);
    //         float subtra = num1 - num2;
    //         printf("Subtração: %.2f\n", subtra);
    //         break;
    //    case '*':
    //         printf("Digite o primeiro número: ");
    //         scanf("%f", &num1);
    //         printf("Digite o segundo número: ");
    //         scanf("%f", &num2);
    //         float multiplica = num1 * num2;
    //         printf("Multiplicação: %.2f\n", multiplica);
    //         break;
    //     case '\\':
    //         printf("Digite o primeiro número: ");
    //         scanf("%f", &num1);
    //         printf("Digite o segundo número: ");
    //         scanf("%f", &num2);
    //         printf("Divisao: %.2f\n", num1 / num2);
    //         break;
    //     default:
    //         printf("Opção inválida");
    //         break;
    //
    //
    //
    // }

// int num;
//     printf("Digite um numero: ");
//     scanf("%d", &num);
//
//     if ((num % 5 == 0) && (num % 3 == 0)) {
//         printf("O número não pode ser divísivel pelos 2");
//     }
//
//     else if(num % 5 == 0) {
//         printf("O número é divísil por 5");
//
//
//     }
//     else if(num % 3 == 0) {
//         printf("Número divísivel por 3");
//     }

    float a,b, c;
    float delta;
    printf("Insira o coeficiente a: ");
    scanf("%f", &a);
    printf("Insira o coeficiente b: ");
    scanf("%f", &b);
    printf("Insira o coeficiente c: ");
    scanf("%f", &c);

    if (a != 0) {
        delta = (b * b) - 4 * a * c;

        if (delta < 0) {
            printf("Não existe raiz");
        }
        if (delta == 0) {
            printf("Raíz única");
        }
        if (delta > 0) {
            float raiz1 = (-b + sqrt(delta)) / (2 * a);
            float raiz2 = (-b - sqrt(delta)) / (2 * a);

            printf("Raiz 1: %.2f\n", raiz1);
            printf("Raiz 2: %.2f", raiz2);
        }


    }
    else {
        printf("Não é uma equação de segundo grau");
    }






}