
#include <stdio.h>

float prestacao(float val_total, float val_entrada, int meses) {
    float prestacao_mensal =  (val_total - val_entrada) / meses;
    return prestacao_mensal;

}

int main() {
    float valor_total, valor_entrada;
    int meses;

    printf("Valor total do imovel: ");
    scanf("%f", &valor_total);
    printf("Valor pago na entrada: ");
    scanf("%f", &valor_entrada);
    printf("Será financiado em quantos meses? ");
    scanf("%d", &meses);
    float prestacao_mes = prestacao(valor_total, valor_entrada, meses);
    printf("Valor de cada presta prestacao: %.2f", prestacao_mes);









    return 0;
}
