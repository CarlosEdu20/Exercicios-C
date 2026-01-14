#include <stdio.h>
#include <string.h>

void main() {
    int i = 0, pessoas, num_pessoas = 1;
    printf("Quantas pessoas você vai digitar? ");
    scanf("%d", &pessoas);
    int idades[pessoas];
    char nomes[pessoas][30], mais_velho[30];
    int maior_idade = 0;

    while(getchar() != '\n');

    while (i < pessoas) {

        printf("Dados da %da pessoa: \n", num_pessoas);
        printf("Nome: ");
        fgets(nomes[num_pessoas - 1], 30, stdin);
        printf("Idade: ");
        scanf("%d", &idades[num_pessoas - 1]);

        if (idades[num_pessoas - 1] > maior_idade) {
            maior_idade = idades[num_pessoas - 1];
            strcpy(mais_velho, nomes[num_pessoas - 1]);

         }




        num_pessoas++;
        i++;


        while(getchar() != '\n');

    }
    printf("PESSOA MAIS VELHA: %s", mais_velho);







}
