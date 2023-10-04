#include <stdio.h>
#include <math.h>

/* Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao
custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta
qual o valor de venda e indica a percentagem de lucro da mercadoria. */

int main () {

    //Declaração das variáveis
    float custorMercadoria, valorFrete, despesaEventual, valorVenda, valorBruto, lucroMercadoria;

    // Informações necessárias para o usuário
    printf("Informe o custo da mercadoria: ");
    scanf("%f", &custorMercadoria);
    printf("Informe o valor do frete:: ");
    scanf("%f", &valorFrete);
    printf("Informe a despesa: ");
    scanf("%f", &despesaEventual);

    //Calcular o valor bruto da mercadoria
    valorBruto = custorMercadoria + valorFrete + despesaEventual;

    //informar o valor bruto para o usuário
    printf("O valor bruto da mercadoria e: R$%.2f.", valorBruto);
    printf("Informe o valor da venda: ");
    scanf("%f", &valorVenda);

    //Calcular o lucro
    lucroMercadoria = ((valorVenda - valorBruto)*100)/valorBruto;

    //Apresentação do valor do lucro
    printf("O valor do lucro da mercadorria e: %.2f%%", lucroMercadoria);

    return 0;
}


