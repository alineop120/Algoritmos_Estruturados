/*
    Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.
*/
#include <stdio.h>

int main () 
{
    //Declaração das variáveis
    int carros_vendidos, porcentagem = 0.05;
    double valor_vendas, salario_fixo, valor_por_carro, salario_final;

    //Entrada de Dados
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &carros_vendidos);

    printf("Digite o valor total das vendas: ");
    scanf("%lf", &valor_vendas);

    printf("Digite o salario fixo: ");
    scanf("%lf", &salario_fixo);

    printf("Digite o o valor por carro vendido: ");
    scanf("%lf", &valor_por_carro);

    /* Cálculo do salário final
    Converter porcentagem em decimal
    5% -> 5 / 100 = 0.05*/
    salario_final = salario_fixo + (carros_vendidos * valor_por_carro) + (porcentagem * valor_vendas);

    //Saída de Dados
    printf("O salario final do vendedor e: R$%.2f\n", salario_final);
    
return 0;
}
