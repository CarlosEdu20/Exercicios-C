#include <stdio.h>


float imposto(float salario) {
    float imposto;
    float salario_imposto;

    if (salario <= 4000.00) {
        imposto = 20.0;
        salario_imposto = salario * (imposto / 100.00);
        return salario_imposto;

    }
    else {
        imposto = 25.0;
        salario_imposto = salario * (imposto / 100.00);
        return salario_imposto;
    }
}

float previdencial(float salario) {
    float previdencia = 10.0;
    float sal_desconto_previdencia;

    if (salario <= 1500.00) {
        previdencia = 10.0;
        sal_desconto_previdencia = salario * (previdencia / 100.00);
        return sal_desconto_previdencia;

    }
    else {
        previdencia = 15.0;
        sal_desconto_previdencia = salario * (previdencia / 100.00);
        return sal_desconto_previdencia;

    }
}

float salario_liquido(float salario) {
    float salario_liquido;
    salario_liquido = salario - imposto(salario) - previdencial(salario);
    return salario_liquido;
}





int main () {

    float salario;
    printf("Digite o valor bruto do salário: ");
    scanf("%f", &salario);
    float salario_imposto = salario_liquido(salario);
    printf("Salario liquido = R$ %.2f", salario_imposto);





}