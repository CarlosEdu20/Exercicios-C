#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main() {
    char string[30], stringAux[30];
    int i, j=0;

    printf("Digite uma palava qualquer: ");
    fgets(string, 30, stdin);

    strcpy (stringAux, string);

    for (i = strlen(stringAux)-1; i >= 0; i--) {
        string[j] = stringAux[i];
        j++;
    }

    printf("\nInversao: %s.\n\n", string);
g









    return 0;
}
