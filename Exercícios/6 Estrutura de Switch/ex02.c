/*
    O cardápio de uma lanchonete é o seguinte: 

        ESPECIFICAÇÃO       |   PREÇO UNITÁRIO
    100 - Cachorro quente   |   R$ 10.10
    101 - Bauru Simples     |   R$ 8.30
    102 - Bauru com Ovo     |   R$ 8.50
    103 - Hamburger         |   R$ 12.50
    104 - Cheeseburger      |   R$ 13.25


    Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item.
*/
#include <stdio.h>

int main () 
{
    //Variavéis
    int item_lanche, item_quantidade;
    double valor_pagar;

    //Código dos item a serem escolhido
    printf("ESCOLHA O SEU PEDIDO!\n");
    printf("-----------------------------------------\n");
    printf("100 - Cachorro quente   |   R$ 10.10\n");
    printf("101 - Bauru Simples     |   R$ 8.30\n");
    printf("102 - Bauru com Ovo     |   R$ 8.50\n");
    printf("103 - Hamburger         |   R$ 12.50\n");
    printf("104 - Cheeseburger      |   R$ 13.25\n");
    printf("-----------------------------------------\n");
    scanf("%d", &item_lanche);
    printf("Quantas unidades: ");
    scanf("%d", &item_quantidade);

    //Cálculo das quantidades dos pedidos com o preço fixo
    switch (item_lanche) 
    {
    case 100:
        valor_pagar = item_quantidade * 10.10;
        printf("R$%.2lf de Cachorro Quente.", valor_pagar);
        break;

    case 101:
        valor_pagar = item_quantidade * 8.30;
        printf("R$%.2lf de Bauru Simples.", valor_pagar);
        break;

    case 102:
        valor_pagar = item_quantidade * 8.50;
        printf("R$%.2lf de Bauru com Ovo.", valor_pagar);
        break;

    case 103:
        valor_pagar = item_quantidade * 12.50;
        printf("R$%.2lf de Hamburguer.", valor_pagar);
        break;

    case 104:
        valor_pagar = item_quantidade * 13.25;
        printf("R$%.2lf de Cheeseburguer.", valor_pagar);
        break;
    
    default:
        printf("Item desconhecido.");
    }

    return 0;
}