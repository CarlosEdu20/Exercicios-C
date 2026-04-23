#include <stdio.h>

int main () {
    int num_pessoas, i = 0, idade_menor = 0;
    printf("Quantas pessoas serão digitadas? ");
    scanf("%d", &num_pessoas);
    char nomes[num_pessoas][30];
    int idades[num_pessoas];
    float alturas[num_pessoas];
    float soma_alturas = 0;

    while(getchar() != '\n');

    while (i <= num_pessoas - 1) {
        printf("Dados da pessoa %da pessoa\n", i + 1);
        printf("Nome: ");
        fgets(nomes[i], 30, stdin);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%f", &alturas[i]);

        i++;
        while(getchar() != '\n');
    }
    for (i = 0; i <= num_pessoas - 1; i++) {
        soma_alturas += alturas[i];
    }
    printf("Altura média: %.2f\n", soma_alturas / num_pessoas);

    for (i = 0; i <= num_pessoas - 1; i++) {
        if (idades[i] < 16 ) {
            idade_menor++;
        }
    }
    float porcetagem_de_menor = (idade_menor * 100) / num_pessoas;
    printf("Pessoas com menos de 16 anos %.1f%%\n", porcetagem_de_menor);
    for (i = 0; i < num_pessoas; i++) {
        if (idades[i] < 16) {
            printf("%s", nomes[i]);
        }
    }

    return 0;
}