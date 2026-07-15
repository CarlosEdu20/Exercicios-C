
#include <stdio.h>

float realParaDolar(float cotacao, float real) {
    return real / cotacao;
}

int main() {
    float valor_dolar, valor_real;
    printf("Digite a cotação do dolar: ");
    scanf("%f", &valor_dolar);
    printf("Digite a quantia em reais: ");
    scanf("%f", &valor_real);
    float valor_convertido =  realParaDolar(valor_dolar, valor_real);

    printf("Você pode comprar %.2f dolares com esta quantia", valor_convertido);






    return 0;
}
