#include <stdio.h>

/* O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos
(aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor. */

int main () {

    //Declaração das Variáveis
    double custoFabrica, custoDistribuidor, custoImpostos, custo_final_consumidor;
    /*Converter a porcentagem para decimal
    28% = 28 / 100 = 0.28 */
    double percentualDistribuidor = 0.28;            
    double percentualImpostos = 0.45;

    //Entrada de Dados
    printf("Digite o custo de fabrica do carro: ");
    scanf("%lf", &custoFabrica);

    //Cálculo do custo do distribuidor e dos impostos
    custoDistribuidor = custoFabrica * percentualDistribuidor;
    custoImpostos = custoFabrica * percentualImpostos;
    //Cálculo do custo final
    custo_final_consumidor = custoFabrica + custoDistribuidor + custoImpostos;

    //Saída de Dados
    printf("O custo final ao consumidor e: R$%.2f\n", custo_final_consumidor);


    return 0;
}
