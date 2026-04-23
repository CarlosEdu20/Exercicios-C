# include <stdio.h>


int main() {
    float renda_anual_salario, prestacao_servico, capital_ganho, gastos_medicos, gastos_educacionais;
    float imposto_salario, imposto_servico, imposto_ganho_capital, imposto_bruto;
    float salario, maximo_dedutivo, gastos_dedutiveis, abatimento, imposto_devido;
    printf("Renda anual com salário: ");
    scanf("%f", &renda_anual_salario);

    printf("Renda anual com prestação de serviço: ");
    scanf("%f", &prestacao_servico);

    printf("Renda anual com ganho de capital: ");
    scanf("%f", &capital_ganho);

    printf("Gastos médicos: ");
    scanf("%f", &gastos_medicos);

    printf("Gastos educacionais: ");
    scanf("%f", &gastos_educacionais);

    printf("\n");

    printf("RELATÓRIO DE IMPOSTO DE RENDA");

    printf("\n");

    printf("CONSOLIDADO DE RENDA:");

    salario = renda_anual_salario / 12.0;

    if (salario > 3000 && salario < 5000) {
        imposto_salario = (renda_anual_salario * 10) / 100;
        imposto_servico = (prestacao_servico * 15.0) / 100.0;
        imposto_ganho_capital = (capital_ganho * 20.0) / 100.0;

        printf("\nImposto sobre salário: %.2f", imposto_salario);
        printf("\nImposto sobre serviços: %.2f ", imposto_servico);
        printf("\nImposto sobre ganho de capital: %.2f", imposto_ganho_capital);

        printf(" \n");
        printf("\nDEDUÇÕES:");
        maximo_dedutivo = (imposto_salario + imposto_servico + imposto_ganho_capital) * 0.3;
        printf("\nMáximo dedutível: %.2f", maximo_dedutivo);
        gastos_dedutiveis = gastos_educacionais + gastos_medicos;
        printf("\nGastos dedutíveis: %.2f", gastos_dedutiveis);
        printf(" \n");

        printf("RESUMO:\n");
        imposto_bruto = imposto_salario + imposto_servico + imposto_ganho_capital;
        printf("Imposto bruto total: %.2f", imposto_bruto);

        if (maximo_dedutivo < gastos_dedutiveis) {
            abatimento = maximo_dedutivo;
            printf("\nAbatimento: %.2f", abatimento);
        }
        else if (maximo_dedutivo > gastos_dedutiveis) {
            abatimento = gastos_dedutiveis;
            printf("\nAbatimento: %.2f", abatimento);
        }

        imposto_devido =  imposto_bruto - abatimento;
        printf("\nImposto devido: %.2f", imposto_devido);




    }
    if (salario > 5000) {
        imposto_salario = (renda_anual_salario * 20) / 100;
        imposto_servico = (prestacao_servico * 15.0) / 100.0;
        imposto_ganho_capital = (capital_ganho * 20.0) / 100.0;

        printf("\nImposto sobre salário: %.2f", imposto_salario);
        printf("\nImposto sobre serviços: %.2f ", imposto_servico);
        printf("\nImposto sobre ganho de capital: %.2f", imposto_ganho_capital);

        printf("\nDEDUÇÕES:");
        maximo_dedutivo = (imposto_salario + imposto_servico + imposto_ganho_capital) * 0.3;
        printf("\nMáximo dedutível: %.2f", maximo_dedutivo);
        gastos_dedutiveis = gastos_educacionais + gastos_medicos;
        printf("\nGastos dedutíveis: %.2f", gastos_dedutiveis);
        printf(" \n");

        printf("RESUMO:\n");
        imposto_bruto = imposto_salario + imposto_servico + imposto_ganho_capital;
        printf("Imposto bruto total: %.2f", imposto_bruto);
        if (maximo_dedutivo < gastos_dedutiveis) {
            abatimento = maximo_dedutivo;
            printf("\nAbatimento: %.2f", abatimento);
        }
        else if (maximo_dedutivo > gastos_dedutiveis) {
            abatimento = gastos_dedutiveis;
            printf("\nAbatimento: %.2f", abatimento);
        }
        imposto_devido =  imposto_bruto - abatimento;
        printf("\nImposto devido: %.2f", imposto_devido);

    }
    else {
        imposto_salario = 0.0;
        imposto_servico = (prestacao_servico * 15.0) / 100.0;
        imposto_ganho_capital = (capital_ganho * 20.0) / 100.0;

        printf("\nImposto sobre salário: %.2f", imposto_salario);
        printf("\nImposto sobre serviços: %.2f ", imposto_servico);
        printf("\nImposto sobre ganho de capital: %.2f", imposto_ganho_capital);

        printf("\nDEDUÇÕES:");
        maximo_dedutivo = (imposto_salario + imposto_servico + imposto_ganho_capital) * 0.3;
        printf("\nMáximo dedutível: %.2f", maximo_dedutivo);
        gastos_dedutiveis = gastos_educacionais + gastos_medicos;
        printf("\nGastos dedutíveis: %.2f", gastos_dedutiveis);
        printf(" \n");

        printf("RESUMO:\n");
        imposto_bruto = imposto_salario + imposto_servico + imposto_ganho_capital;
        printf("Imposto bruto total: %.2f", imposto_bruto);
        if (maximo_dedutivo < gastos_dedutiveis) {
            abatimento = maximo_dedutivo;
            printf("\nAbatimento: %.2f", abatimento);
        }
        else if (maximo_dedutivo > gastos_dedutiveis) {
            abatimento = gastos_dedutiveis;
            printf("\nAbatimento: %.2f", abatimento);
        }
        imposto_devido =  imposto_bruto - abatimento;
        printf("\nImposto devido: %.2f", imposto_devido);

    }





    return 0;
}