#include <stdio.h>
#include <string.h>

int main() {
    unsigned short int qtd_clientes;

    printf("Informe a quantidade de clientes: ");
    scanf("%hu", &qtd_clientes);
    char nomes[qtd_clientes][50], Telefone[qtd_clientes][15];
    unsigned short int Tipo[qtd_clientes];
    int minutos[qtd_clientes];
    double valor[qtd_clientes];


    while (getchar() != '\n');
    for (int i = 0; i < qtd_clientes; i++) {
        printf("Dados do %do. cliente:\n", i + 1);

        printf("Nome: ");
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';

        printf("Telefone: ");
        fgets(Telefone[i], 15, stdin);
        Telefone[i][strcspn(Telefone[i], "\n")] = '\0';

        printf("Tipo: ");
        scanf("%hu", &Tipo[i]);

        printf("Minutos: ");
        scanf("%d", &minutos[i]);

        while (getchar() != '\n');
        printf("\n");


    }

    float tipo_preco [3][2];
    printf("Informe o preço básico e excedente de cada tipo de conta: \n");
    for (int i = 0; i < 3; i++) {
        printf("Tipo %d:\n", i);
        for (int j = 0; j < 2; j++) {
            scanf("%f", &tipo_preco[i][j]);
        }

    }
    for (int i = 0; i < qtd_clientes; i++) {
        if (minutos[i] <= 90) {
            valor[i] = tipo_preco[Tipo[i]][0];
        } else {
            minutos[i] = minutos[i] - 90;
            valor[i] = tipo_preco[Tipo[i]][0] + (minutos[i] * tipo_preco[Tipo[i]][1]);
    }
    }

    printf("RELATÓRIOS DE CLIENTES:\n");


    for (int i = 0; i < qtd_clientes; i++) {
        printf("%s, ", nomes[i]);
        printf("%s, ", Telefone[i]);
        printf("Tipo %hu,", Tipo[i]);
        printf(" Minutos: %d,", minutos[i]);
        printf(" Conta = R$ %.2f", valor[i]);
        printf("\n");



    }





    return 0;
}


