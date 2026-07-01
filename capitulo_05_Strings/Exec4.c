#include <stdio.h>
#include <string.h>


int main() {
    char palavra[50];
    printf("Insira uma palavra: ");
    fgets(palavra, 50, stdin);
    int Detras = strlen(palavra);

    for (int i = Detras - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }



    return 0;
}
