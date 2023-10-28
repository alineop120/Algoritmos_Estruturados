/*
    Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem):
        (a) Opção: a vista com 10% de desconto;
        (b) Opção: em duas vezes (preço da etiqueta);
        (c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

    OBS: fazer uma função que imprime as opções, solicita a opção desejada e retorna a opção escolhida. No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção). 
*/
#include <stdio.h>
#include <math.h>

// Opções de Pagamento
double a_vista(double preco)                    //a vista com 10% de desconto
{
    //Desconto 10% = 0.10
    return preco * 0.10;
}

double preco_etiqueta(double preco)    //em duas vezes (preço da etiqueta)
{
    //Desconto 10% = 0.10
    double preco_desconto = preco * 0.10;
    return preco + pow(preco_desconto,2);
}

double juros_mes()                              //de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00)                   
{
    //Fórmula - Juros Simples
    return ;
}

// Estrutura do código
int main()
{
    double valor_compra, forma_pagamento;
    char opcao;

    printf("Informe o valor da compra: ");
    scanf("%lf", &valor_compra);
    printf("Informe a forma do pagamento: ");
    scanf("%s", &opcao);

    // Opções de pagamento
    switch (opcao)
    {
    //a vista com 10% de desconto
    case 1:
        forma_pagamento = a_vista(valor_compra); 
        break;

    //em duas vezes (preço da etiqueta)
    case 2:
        forma_pagamento = preco_etiqueta(valor_compra);
        break;
    
    //de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00)
    case 3: 
        forma_pagamento = juros_mes();
        break;
    default:
        break;
    }

    // Saída de Dados
    printf("O total da prestacao e %.2lf", forma_pagamento);

    return 0;
}