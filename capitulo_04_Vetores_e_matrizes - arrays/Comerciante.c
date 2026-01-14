#include <stdio.h>


void main() {
    int i = 0, qtd_produtos, j = 1;
    printf("Serão digitados dados de quantos produtos? ");
    scanf("%d", &qtd_produtos);
    char nome_produtos[qtd_produtos][30];
    float preco_compra[qtd_produtos], preco_venda[qtd_produtos], lucro[qtd_produtos], total_compra = 0, total_venda = 0;
    float lucro_venda[qtd_produtos];
    int lucro_abaixo_de_10 = 0, lucro_acima_de_20 = 0, lucro_entre_10_e_20 = 0;



    while(getchar() != '\n');

    while(i < qtd_produtos) {
        printf("Produto %d: \n", j++);
        printf("Nome: ");
        fgets(nome_produtos[i], 30, stdin);
        printf("Preco de compra: ");
        scanf("%f", &preco_compra[i]);
        printf("Preco de venda: ");
        scanf("%f", &preco_venda[i]);

        total_compra += preco_compra[i];
        total_venda += preco_venda[i];

        lucro[i] =  preco_venda[i] - preco_compra[i];
        lucro_venda[i] = (lucro[i] / preco_venda[i]) * 100;


        if (lucro_venda[i] < 10) {
            lucro_abaixo_de_10++;
        }

        if (lucro_venda[i] >= 10 && lucro_venda[i] <= 20) {
            lucro_entre_10_e_20++;
        }
        if (lucro_venda[i] > 20) {
            lucro_acima_de_20++;

        }


        i++;
        while(getchar() != '\n');

    }
    printf("RELATORIO: \n");
    printf("Lucro abaixo de 10%%: %d\n", lucro_abaixo_de_10);
    printf("Lucro entre 10%% e 20%%: %d\n", lucro_entre_10_e_20);
    printf("Lucro acima de 20%% : %d\n", lucro_acima_de_20);
    printf("Total compra : %.2f\n", total_compra);
    printf("Total venda : %.2f\n", total_venda);
    float lucro_total =  total_venda - total_compra;
    printf("Lucro total: %.2f", lucro_total);











}