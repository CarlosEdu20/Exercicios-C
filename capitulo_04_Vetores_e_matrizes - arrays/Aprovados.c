#include  <stdio.h>
#include <string.h>


void main() {
    int qtd_alunos;
    printf("Quantos alunos serão digitados? ");
    scanf("%d", &qtd_alunos);
    float nota1[qtd_alunos], nota2[qtd_alunos], media;
    char nomes[qtd_alunos][30], alunos_aprovados[30];
    int i = 0, j = 1;
    float media_aprovados = 0;
    char nome_aprovados[30];


    while(getchar() != '\n');
    while(i < qtd_alunos) {
        printf("Digite nome, primeira e segunda nota do %do aluno: \n", j);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        scanf("%f", &nota1[i]);
        scanf("%f", &nota2[i]);
        media = (nota1[i] + nota2[i]) / qtd_alunos;

        if (media >= 6.0) {
            strcpy(alunos_aprovados, nomes[i]);
            printf("Nome do aluno: %s \n", alunos_aprovados);






        }

        j++;
        i++;
        while(getchar() != '\n');

    }








}
