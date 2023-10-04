#include <stdio.h>

/*
    Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:

        • o valor do salario atual do funcionário; 

        • o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

    Use as tabelas abaixo para calcular o salario reajustado deste funcionário e imprima o valor do salario final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.
    _____________________________________________________________________________
    |   SALÁRIO ATUAL   |   REAJUSTE (%)    |   TEMPO DE SERVIÇO    |   BÔNUS   |
    |    até 500.00     |    25% = 0.25     |    abaixo de 1 ano    | sem bônus |
    |    até 1000.00    |    20% = 0.20     |    de 1 a 3 anos      |  100.00   |
    |    até 1500.00    |    15% = 0.15     |    de 4 a 6 anos      |  200.00   |
    |    até 2000.00    |    10% = 0.10     |    de 7 a 10 anos     |  300.00   |


*/

int main () {
//  Variaveis
    float salario_atual, tempoDeServico, salario_reajustado, bonus_tempoDeServico, salario_novo;
    
//  Informações sobre o salário atual do funcionário
    printf("Seu Salario atual: ");
    scanf("%f", &salario_atual);
//  Informações sobre o tempo de serviço do funcionário
    printf("Tempo de servico nessa empresa: ");
    scanf("%f", &tempoDeServico);

//
    if ( (salario_atual <= 500) && (tempoDeServico <= 1) ) {      //COM reajuste de 25% e SEM bônus
        salario_reajustado = salario_atual + (salario_atual * 0.25);

        printf("Seu salario reafustado sem bonus sera R$%.2f", salario_reajustado);

    } else if ( (salario_atual <= 1000) && ( (tempoDeServico > 1) && (tempoDeServico <= 3) ) ) {     //COM reajuste de 20% e COM bônus de 100
        salario_reajustado = salario_atual + (salario_atual * 0.20);
        bonus_tempoDeServico = tempoDeServico * 100;
        salario_novo = salario_reajustado + bonus_tempoDeServico;

        printf("\n\nSeu salario reajustado com bonus sera R$%.2f", salario_novo);

    } else if ( (salario_atual <= 1500) && ( (tempoDeServico > 4) && (tempoDeServico <= 6) ) ) {     //COM reajuste de 15% e COM bônus de 200
        salario_reajustado = salario_atual + (salario_atual * 0.15);
        bonus_tempoDeServico = tempoDeServico * 200;
        salario_novo = salario_reajustado + bonus_tempoDeServico;

        printf("\n\nSeu salario reajustado com bonus sera R$%.2f", salario_novo);

    } else if ( (salario_atual <= 2000) && ( (tempoDeServico > 7) && (tempoDeServico <= 10) ) ) {     //COM reajuste de 10% e COM bônus de 300
        salario_reajustado = salario_atual + (salario_atual * 0.10);
        bonus_tempoDeServico = tempoDeServico * 300;
        salario_novo = salario_reajustado + bonus_tempoDeServico;

        printf("\n\nSeu salario reajustado com bonus sera R$%.2f", salario_novo);

    } else if ( (salario_atual > 2000) && (tempoDeServico > 10) ) {     //SEM reajuste e COM bônus de 500
        bonus_tempoDeServico = tempoDeServico * 500;
        salario_novo = salario_atual + bonus_tempoDeServico;

        printf("\n\nSeu salario reajustado com bonus sera R$%.2f", salario_novo);

    } else {
        printf("INFORMACOES INCORRETAS!");
    }























    return 0;
}