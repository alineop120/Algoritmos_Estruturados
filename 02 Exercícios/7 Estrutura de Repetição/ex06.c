/*
    Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. 

    1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade 
*/
#include <stdio.h>

int main () 
{
//  variáveis
    int fruta, quantidade, valor_total;
    int cont = 0;
    char confirmacao;

//  FRUTA
    do 
    {
        printf("Realize sua compra\n");
        printf("1 => Abacaxi - 5,00 (a unidade)\n");
        printf("2 =>  Maca   - 1,00 (a unidade)\n");
        printf("3 =>  Pera   - 4,00 (a unidade)\n");
        scanf("%d", &fruta);

        if (fruta != '1' && fruta != '2' && fruta != '3') 
        {
            printf("Opcao invalida. Digite novamnete\n\n");
        }
    } 
    while (fruta != '1' && fruta != '2' && fruta != '3');

//  QUANTIDADES
    do 
    {
        printf("Quantas quantidades: ");
        scanf("%d", &quantidade);

        if (quantidade > 0 && quantidade < 10) 
        {
            printf("Opcao invalida. Digite novamnete\n\n");
        } 
        else if (fruta == '1') 
        {
            valor_total = quantidade * 5.00;
        } 
        else if (fruta == '2') 
        {
            valor_total = quantidade * 1.00;
        } 
        else if (fruta == '3') 
        {
            valor_total = quantidade * 4.00;
        }
    }
    while (quantidade > 0 && quantidade < 10);

    printf("Valor da compra: R$%d\n\n", valor_total);
    
return 0;
}