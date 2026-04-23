#include <stdio.h>

int main() {
    int num_pessoas, i = 0, j = 1, num_mulheres = 0, num_homens = 0;
    printf("Quantas pessoas serão digitadas? ");
    scanf("%d", &num_pessoas);
    float alturas[num_pessoas], maior_altura, menor_altura,
    media_alturas, soma_alturas = 0;
    char genero[num_pessoas];

    while (i < num_pessoas) {
        printf("Altura da %da pessoa: ", j);
        scanf("%f", &alturas[i]);
        printf("Genero da %da pessoa: ", j);
        scanf(" %c", &genero[i]);
        j++;
        i++;
    }

    maior_altura = alturas[0];
    menor_altura = alturas[0];
    for (int i = 1; i < num_pessoas; i++ ) {
        if (alturas[i] > maior_altura) {
            maior_altura = alturas[i];
        }
        if (alturas[i] < menor_altura){
            menor_altura = alturas[i];
        }
    }
    printf("Menor altura: %.2f\n", menor_altura);
    printf("Maior altura: %.2f\n", maior_altura);


    for (int i = 0; i < num_pessoas; i++) {
        if (genero[i] == 'F' || genero[i] == 'f') {
            num_mulheres++;
            soma_alturas += alturas[i];
            media_alturas = soma_alturas / num_mulheres;

        }
        if (genero[i] == 'M' || genero[i] == 'm') {
            num_homens++;
        }

    }

    printf("Media das alturas das mulheres = %.2f\n", media_alturas);
    printf("Numero de homens: %d", num_homens);




    return 0;
}