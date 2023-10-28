/*
    Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem):
        (a) Opção: a vista com 10% de desconto;
        (b) Opção: em duas vezes (preço da etiqueta);
        (c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

    OBS: fazer uma função que imprime as opções, solicita a opção desejada e retorna a opção escolhida. No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção). 
*/
#include <stdio.h>
#include <math.h>

// Protótipo
int opcao_pagamento();
void preco_aVista(float total_compra);
void preco_duasVezes(float total_compra);
void preco_maisTresVezes(float total_compra);


int main() 
{
    int opcao;
    float total_compra;

    printf("Digite o total da compra: ");
    scanf("%f", &total_compra);
    opcao = opcao_pagamento();

    switch (opcao)
    {
    case 1:
        preco_aVista(total_compra);
        break;

    case 2:
        preco_duasVezes(total_compra);
        break;

    case 3:
        preco_maisTresVezes(total_compra);
        break;
    }

    return 0;
}

int opcao_pagamento()
{
    int opcao_escolha;
    do
    {
        printf("(1) - A vista - 10 porcento de desconto\n");
        printf("(2) - Duas vezes - preço ds etiqueda\n");
        printf("(3) - 3 a 10 vezes com juros de 3 porcento\n");
        printf("Digite a opcao escolhida: ");
        scanf("%d", &opcao_escolha);

        if (opcao_escolha < 1 || opcao_escolha > 3)
        {
            printf("Opcao invalida");
        }
        
    } while (opcao_escolha < 1 || opcao_escolha > 3);
    
    return opcao_escolha;
}

void preco_aVista(float total_compra)
{
    float desconto = total_compra * 0.10;
    float valor_final = total_compra - desconto;

    printf("\nTotal do desconto: %.2lf", desconto);
    printf("\nTotal final da compra: %.2lf", valor_final);
}

void preco_duasVezes(float total_compra) 
{
    float valor_parcela = total_compra / 2;
    printf("\nTotal da compra: %.2lf", total_compra);
    printf("\nTotal final de cada parcela: %.2lf", valor_parcela);
}

void preco_maisTresVezes(float total_compra)
{
    int parcelas;
    float juros, valor_final, total_parcela;
    if (total_compra < 100)
    {
        printf("Valor invalido para parcelar em mais tres vezes.");
        return;
    }

    do
    {
        printf("Digite a quantidade de parcelas: ");
        scanf("%d", &parcelas);
        if (parcelas < 3 || parcelas > 10)
        {
            printf("Quantidade de parcelas invalida");
        }
        
    } while (parcelas < 3 || parcelas > 10);
    //calcular o juro
    juros = total_compra * 0.03;
    valor_final = total_compra = juros;
    total_parcela = valor_final / parcelas;

    printf("\nTotal do juros: %.2lf", juros);
    printf("\nTotal final de cada parcela: %.2lf", total_parcela);
    printf("\nTotal da compra com juros: %.2lf", valor_final);
}