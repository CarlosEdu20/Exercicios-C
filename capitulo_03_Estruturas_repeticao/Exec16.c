
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    float soma;
    int auxiliar =1 ;
    soma =0;
    while( auxiliar ) {
        printf("Digite um número qualquer ou 0 para terminar");
        scanf("%d", &auxiliar);
        printf("Usuário digitou %d \n",auxiliar);
        soma=0;
        if (auxiliar) {
            for (i=1;i<=auxiliar;i++){
                soma += (1.0/i);  // 1.0 irá forçar um cálculo float
            };
            printf("O resultado da série é %f \n\n",soma);
        }
        else {
            printf("entrada terminada pelo usuário \n");
        }
    };

}