/*
    Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir). 

    _____________________________________________________________________________________________________________
        PRATO       |   CALORIAS     |      SOBREMESA       |   CALORIAS    |       BEBIDA          |   CALORIAS
    Vegetariano     |   180 cal      |  Abacaxi             |   75 cal      |   Chá                 |   20 cal
    Peixe           |   230 cal      |  Sorvete Diet        |   110 cal     |   Suco Laranja        |   70 cal
    Frango          |   250 cal      |  Mouse Diet          |   170 cal     |   Suco Melão          |   100 cal
    Carne           |   350 cal      |  Mouse Chocolate     |   200 cal     |   Refrigerante Diet   |   65 cal
    _____________________________________________________________________________________________________________

    Enumere cada opção de prato, sobremesa e bebida.

    Prato: 1 - vegetariano, 2 – Peixe, 3 – Frango, 4 – Carne;

    Sobremesa: 1 – Abacaxi, 2 – Sorvete diet, 3 – Mouse diet, 4 – Mouse chocolate;

    Bebida: 1 – Chá, 2 - Suco de laranja, 3 – Suco de melão, 4 – Refrigerante diet. 
*/
#include <stdio.h>
#include <string.h>

int main () 
{
    //Variáveis
    int prato, sobremesa, bebida, quantidade_total, cal_prato = 0, cal_sobremesa = 0, cal_bebida = 0;
    char p[30];

    //Entrada de informações - Escolhendo o prato
    printf("ESCOLHA SEU PRATO!\n");
    printf("--------------------------------\n");
    printf("1 - VEGETARIANO    |    180 cal\n");
    printf("2 - PEIXE          |    230 cal\n");
    printf("3 - FRANGO         |    250 cal\n");
    printf("4 - CARNE          |    350 cal\n");
    printf("--------------------------------\n");
    scanf("%d", &prato);

    //Entrada de informações - Escolhendo a sobremesa
    printf("ESCOLHA SUA SOBREMESA!\n");
    printf("-------------------------------------\n");
    printf("1 - ABACAXI              |    75 cal\n");
    printf("2 - SORVETE Diet         |    110 cal\n");
    printf("3 - MOUSE Diet           |    170 cal\n");
    printf("4 - MOUSE - CHOCOLATE    |    200 cal\n");
    printf("--------------------------------------\n");
    scanf("%d", &sobremesa);

    //Entrada de informações - Escolhendo a bebida
    printf("ESCOLHA SUA BEBIDA!\n");
    printf("-------------------------------------\n");
    printf("1 - CHA                  |    20 cal\n");
    printf("2 - SUCO - LARANJA       |    70 cal\n");
    printf("3 - SUCO - MELAO         |    100 cal\n");
    printf("4 - REFRIGERANTE Diet    |    65 cal\n");
    printf("-------------------------------------\n");
    scanf("%d", &bebida);

    //Um PRATO e sua caloria
    switch (prato) 
    {
    case 1: 
    
        strcpy(p, "Vegetariano");           // Vegetariano
        cal_prato =  180;                   // Calorias
        
        break;

    case 2:                             // Peixe
        cal_prato = 230;
        break;

    case 3:                             // Frango
        cal_prato = 250;
        strcpy(p, "Frango");
        break;

    case 4:                             // Carne
        cal_prato = 350;
        break;
    
    default:
        printf("PRATO DESCONHECIDO!");
        
    }

    //Uma SOBREMESA e sua caloria
    switch (sobremesa) 
    {
    case 1:                             // Abacaxi
        cal_sobremesa =  75;                // Calorias
        break;

    case 2:                             // Sorvete Diet
        cal_sobremesa = 110;
        break;

    case 3:                             // Mouse Diet.
        cal_sobremesa = 170;
        break;

    case 4:                             // Mouse de Chocolate
        cal_sobremesa = 200;
        break;
    
    default:
        printf("SOBREMESA DESCONHECIDA!");
        break;
    }

    //Uma BEBIDA e sua caloria
    switch (bebida)
    {
    case 1:                             // Chá
        cal_bebida =  20;                   //Calorias
        break;

    case 2:                             // Suco de Laranja
        cal_bebida = 70;
        break;

    case 3:                             // Suco de Melão
        cal_bebida = 100;
        break;

    case 4:                             // Refrigerante Diet
        cal_bebida = 65;
        break;
    
    default:
        printf("BEBIDA DESCONHECIDA!");
        break;
    }

    //Total de Calorias das refeições escolhidas
    quantidade_total = cal_prato + cal_sobremesa + cal_bebida;

    printf("Prato: %s. Total = %d cal.", p, quantidade_total);

    return 0;
}
