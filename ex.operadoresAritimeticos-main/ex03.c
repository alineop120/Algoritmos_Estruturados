#include <stdio.h>

/*Dadas as medidas de uma sala, informe sua área.*/

int main () {

    //Declaração das variáveis
    float larg, compr, area;

    //Entrada de dados
    printf("Informa a largura: ");
    scanf("%f",&larg);
    printf("Informe o comprimento: ");
    scanf("%f",&compr);

    //Calcular a area
    area = larg * compr;

    //Apresenta a saída
    printf("\nArea: %.2fm2", area);

    return 0;
}
