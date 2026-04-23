#include <stdio.h>

int main() {
    const int cerveja = 5;
    const int refrigerante = 3;
    const int espetinho = 7;
    int qtd_cerveja, qtd_refrigerante, qtd_espetinho;
    float ingresso, total, soma_consumo, Couvert;


    char sexo;

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);


    switch (sexo) {
        case 'F':
            printf("Quantidade de cerveja: ");
            scanf("%d", &qtd_cerveja);
            printf("Quantidade de refrigerante: ");
            scanf("%d", &qtd_refrigerante);
            printf("Quantidade de espetinho: ");
            scanf("%d", &qtd_espetinho);
            ingresso = 8.00;
            soma_consumo = (qtd_cerveja * cerveja) + (qtd_refrigerante * refrigerante) + (qtd_espetinho * espetinho);

            if ((sexo == 'F') &&  (soma_consumo > 30)) {
                printf("RELATÓRIO:\n");
                printf("Consumo = R$ %.2f\n", soma_consumo);
                printf("Isento de Couvert\n");
                printf("Ingresso = R$ %.2f", ingresso);
                total = soma_consumo + ingresso;
                printf("\nValor a pagar = R$ %.2f", total);

            }
            else {
                Couvert = 4.00;
                printf("RELATÓRIO:\n");
                printf("Consumo = R$ %.2f\n", soma_consumo);
                printf("Couvert = R$ %.2f\n", Couvert);
                printf("Ingresso = R$ %.2f", ingresso);
                total = soma_consumo + ingresso +  Couvert;
                printf("\nValor a pagar = R$ %.2f", total);

            }
            break;

        case 'M':
            printf("Quantidade de cerveja: ");
            scanf("%d", &qtd_cerveja);
            printf("Quantidade de refrigerante: ");
            scanf("%d", &qtd_refrigerante);
            printf("Quantidade de espetinho: ");
            scanf("%d", &qtd_espetinho);
            ingresso = 10.00;
            soma_consumo = (qtd_cerveja * cerveja) + (qtd_refrigerante * refrigerante) + (qtd_espetinho * espetinho);

            if ((sexo == 'M') &&  (soma_consumo > 30)) {
                printf("RELATÓRIO:\n");
                printf("Consumo = R$ %.2f\n", soma_consumo);
                printf("Isento de Couvert\n");
                printf("Ingresso = R$ %.2f", ingresso);
                total = soma_consumo + ingresso;
                printf("\nValor a pagar = R$ %.2f", total);

            }
            else {
                Couvert = 4.00;
                printf("RELATÓRIO:\n");
                printf("Consumo = R$ %.2f\n", soma_consumo);
                printf("Couvert = R$ %.2f\n", Couvert);
                printf("Ingresso = R$ %.2f", ingresso);
                total = soma_consumo + ingresso +  Couvert;
                printf("\nValor a pagar = R$ %.2f", total);

            }
            break;
        default:
            printf("Opção invalida");



    }

    return 0;
}