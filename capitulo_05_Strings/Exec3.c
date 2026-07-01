#include <stdio.h>
#include <string.h>


int main() {
    char palavra[30];
    int qtdPalavras = 0;
    printf("Digite a palavra: ");
    fgets(palavra, 30, stdin);



    for (int i = 0; i < palavra[i]; i++) {
        qtdPalavras++;

    }
    printf("%d", qtdPalavras - 1);





    return 0;
}
