#include  <stdio.h>
#include <string.h>


void main() {
    int qtd_alunos;
    printf("Quantos alunos serão digitados? ");
    scanf("%d", &qtd_alunos);
    float nota1[qtd_alunos], nota2[qtd_alunos];
    char nomes[qtd_alunos][30];
    int i = 0, j = 1;
    float media = 0.0, soma = 0;
    while(getchar() != '\n');

    while(i < qtd_alunos) {
        printf("Digite nome, primeira e segunda nota do %do aluno: \n", j);
        fgets(nomes[i], 30, stdin);
        scanf("%f", &nota1[i]);
        scanf("%f", &nota2[i]);

        j++;
        i++;
        while(getchar() != '\n');
    }


    printf("Alunos aprovados: \n");

    for (i = 0; i < qtd_alunos; i++) {
        soma =  nota1[i] + nota2[i];
        media = soma / 2;

        if (media >= 6.0) {
            printf("%s", nomes[i]);


        }
    }









}
