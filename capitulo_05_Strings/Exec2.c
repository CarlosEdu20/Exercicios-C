#include <ctype.h>
#include <stdio.h>


int main() {
    char palavra[30];
    printf("Digite a palavra: ");
    fgets(palavra, 30, stdin);


    for (int i = 0; i < 4; i++) {
        printf("%c", palavra[i]);

    }




    return 0;





}