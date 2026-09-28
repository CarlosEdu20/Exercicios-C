#include <stdio.h>
#include <string.h>



int main() {
    char palavra[50];
    char substituto;
    char contador_vogais = 0;
    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);
    printf("Digite um caractere substituto: ");
    scanf("%c", &substituto);


    while (getchar() != '\n');
    for (int i = 0; palavra[i] != '\0'; i++) {



        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            contador_vogais++;
            palavra[i] = substituto;
        }

    }
    printf("A palavra digitada possui %d vogais.\n", contador_vogais);
    printf("Palavra modificada: %s\n", palavra);








    return 0;
}