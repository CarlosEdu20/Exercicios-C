#include <stdio.h>

float impostoSobreSalario(float salario_anual) {
    float salario;
    float imposto_salario;

    salario = salario_anual / 12.0;

    if (salario < 3000) {
        return imposto_salario = 0.0;
    }
    else if (salario >= 3000 && salario < 5000) {
        return imposto_salario = (salario_anual * 10) / 100;
    }
    else {
        return imposto_salario = (salario_anual * 20) / 100;
    }

}
float impostoSobreServivos(float prestacao_servico) {
    float salario_servico;

    if (prestacao_servico > 1000) {
        return salario_servico = (prestacao_servico * 15) / 100;
    }

}
float impostoSobreGanhoCapital (float ganho_capital) {
    float salario_ganho_capital;
    return salario_ganho_capital = (ganho_capital * 20) / 100;
}

float impostoBrutoTotal(float salario_anual, float prestacao_servico, float ganho_capital) {
    float total_bruto_imposto;
    return total_bruto_imposto = salario_anual + prestacao_servico + ganho_capital;
}

float abatimento(float salario_anual, float prestacao_servico, float ganho_capital, float gastos_medicos, float gastos_educacionais) {
    float maximo_dedutivo, abatimento, suma_gastos;
    suma_gastos = gastos_medicos + gastos_educacionais;
    maximo_dedutivo = (impostoSobreSalario(salario_anual) + impostoSobreServivos(prestacao_servico) + impostoSobreGanhoCapital(ganho_capital)) * 0.3;

    if (maximo_dedutivo < suma_gastos) {
        abatimento = maximo_dedutivo;
        return abatimento;
    }
    else if (maximo_dedutivo > suma_gastos) {
        abatimento = suma_gastos;
        return abatimento;
    }




}


int main () {
    float salario_anual, prestacao_servico, ganho_capital, gastos_medicos, gastos_educacionais;
    printf("Renda anual com salário: ");
    scanf("%f", &salario_anual);
    printf("Renda anual com prestação de serviço: ");
    scanf("%f", &prestacao_servico);
    printf("Renda anual com ganho de capital: ");
    scanf("%f", &ganho_capital);
    printf("Gastos médicos: ");
    scanf("%f", &gastos_medicos);
    printf("Gastos educacionais: ");
    scanf("%f", &gastos_educacionais);

    printf("\n");
    printf("RELATÓRIO DE IMPOSTO DE RENDA\n");


    float impost_sal = impostoSobreSalario(salario_anual);
    printf("Imposto sobre salário: %.2f\n", impost_sal);
    float prestacao_serv = impostoSobreServivos(prestacao_servico);
    printf("Imposto sobre serviços: %.2f\n", prestacao_serv);
    float impost_ganho_cap = impostoSobreGanhoCapital(ganho_capital);
    printf("Imposto sobre ganho de capital: %.2f\n", impost_ganho_cap);

    float impost_brutal = impostoBrutoTotal(impost_sal, prestacao_serv, impost_ganho_cap);
    printf("Imposto bruto total: %.2f", impost_brutal);
    printf("\n");
    float abati = abatimento(salario_anual, prestacao_servico, ganho_capital, gastos_medicos, gastos_educacionais);
    printf("Abatimento: %.2f", abati);
    float imposto_devido = impost_brutal - abati;
    printf("\nImposto devido: %.2f", imposto_devido);







    return 0;
}

