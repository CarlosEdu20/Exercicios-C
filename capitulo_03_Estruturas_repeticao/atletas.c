#include <stdio.h>
#include <string.h>


int main() {
    int c;
    int qtd_atletas, qtd_homens = 0, qtd_mulheres = 0;
    float altura, altura_media_mulheres = 0, soma_alturas = 0, peso, peso_médio = 0, soma_pesos = 0, mais_alto = 0, porcetagem_homens = 0;
    char nome_atletas[50], sexo, nome_alto[50];
    printf("Qual a quantidade de atletas? ");
    scanf("%d", &qtd_atletas);

    for (int i = 1; i <= qtd_atletas; i++) {
        while ((c = getchar()) != '\n' && c != EOF);
        printf("Digite os dados do atleta numero %d:\n", i);
        printf("Nome: ");
        fgets(nome_atletas, 50, stdin);
        printf("Sexo: ");
        scanf(" %c", &sexo);
        if (sexo != 'M' && sexo != 'F') {
            do {
                printf("Valor invalido! Favor digitar F ou M: ");
                scanf(" %c", &sexo);
            }while (sexo != 'M' && sexo != 'F');
        }

        if (sexo == 'M') {
            qtd_homens++;
        }


        printf("Altura: ");
        scanf("%f", &altura);

        if (sexo == 'F') {
            qtd_mulheres++;
            soma_alturas += altura;
            altura_media_mulheres = soma_alturas / qtd_mulheres;
        }

        if (altura <= 0.0) {
            do {
                printf("Valor invalido! Favor digitar um valor positivo: ");
                scanf("%f", &altura);
            }while (altura <= 0.0);

        }

        if (altura > mais_alto) {
            mais_alto = altura;
            strcpy(nome_alto, nome_atletas);
        }

        printf("Peso: ");
        scanf("%f", &peso);
        if (peso <= 0.0) {
            do {
                printf("Valor invalido! Favor digitar um valor positivo: ");
                scanf("%f", &peso);
            }while (peso <= 0.0);
        }
        soma_pesos += peso;
        peso_médio = soma_pesos / qtd_atletas;

    }

    porcetagem_homens = (qtd_homens * 100.0) / qtd_atletas;


    printf("RELATÓRIO: \n");
    printf("Peso médio dos atletas: %.2f", peso_médio);
    printf("\nAtleta mais alto: %s", nome_alto);
    printf("Porcentagem de homens: %.2f%%\n", porcetagem_homens);
    if (qtd_mulheres == 0) {
        printf("Não há mulheres cadastradas");
    }
    else {
        printf("Altura média das mulheres: %.2f", altura_media_mulheres);
    }






    return 0;
}