#include <stdio.h>
#include <string.h>


int main() {
    int qtd_pessoas, cont = 1, qtd_aprovados = 0;

    printf("Qual a quantidade de pessoas? ");
    scanf("%d", &qtd_pessoas);
    char nomes[qtd_pessoas][50], maior_nota[50];
    float etapa1[qtd_pessoas], etapa2[qtd_pessoas], media[qtd_pessoas], maior_media = 0.0;
    float porcetagem_aprovados = 0.0, media_aprovados = 0.0, soma_aprovados = 0.0;
    fgetc(stdin);

    for (int i = 0; i < qtd_pessoas ; i++) {
        printf("Digite os dados da %da pessoa: \n", cont++);
        printf("Nome: ");
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
        printf("Nota etapa 1: ");
        scanf("%f", &etapa1[i]);
        printf("Nota etapa 2: ");
        scanf("%f", &etapa2[i]);
        fgetc(stdin);
        media[i] = (etapa1[i] + etapa2[i]) / 2;
    }

    printf("TABELA:\n");
    for (int i = 0; i < qtd_pessoas; i++) {
        printf("%s, %.2f,  %.2f, MEDIA = %.2f\n",nomes[i],etapa1[i],etapa2[i], media[i]);

    }

    printf("\nPESSOAS APROVADAS:\n");
    for (int i = 0; i < qtd_pessoas; i++) {
        if (media[i] >= 70.0) {
            printf("%s\n", nomes[i]);
        }
        else {
        }
    }
    for (int i = 0; i < qtd_pessoas; i++) {
        if (media[i] >= 70.0) {
            qtd_aprovados++;
            porcetagem_aprovados = (float)qtd_aprovados / qtd_pessoas * 100.0;
            soma_aprovados += media[i];
            media_aprovados = soma_aprovados/ qtd_aprovados;
        }
    }
    printf("\nPorcetagem de aprovados: %.1f%%\n", porcetagem_aprovados);

    for (int i = 0; i < qtd_pessoas; i++) {
        if (media[i] > maior_media) {
            maior_media = media[i];
            strcpy(maior_nota, nomes[i]);
        }
    }
    printf("Maior media: %s\n", maior_nota);


    if (qtd_aprovados > 0) {
        printf("Media dos aprovados: %.2f\n", media_aprovados);
    }
    else {
        printf("Não há candidatos aprovados");
    }










    return 0;
}