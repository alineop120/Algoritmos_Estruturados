/*
    Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.
*/
#include <stdio.h>

int main ()
{
    //Declaração das Variáveis
    float valorReais, contacaoDolar, valorDolar;

    //Entrada de Dados
    printf("Informe o valor: ");
    scanf("%f", &valorReais);

    //Converte esse valor para dólares
    contacaoDolar = 4.96;
    valorDolar = valorReais / contacaoDolar;

    //Saída de Dados
    printf("o valor em Dolar e %.2f", valorDolar);

return 0;
}