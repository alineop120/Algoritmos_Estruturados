/*
    Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.
*/
#include <stdio.h>
#include <math.h>

int main () 
{
    //Declação das variáveis
    int num1, num2, soma, mult; 
    float sub, div;

    //Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    //Operações
    soma = num1 + num2;
    mult = num1 * num2;
    sub = (float) num1 - num2;
    div = (float) num1 / num2;

    //Apresentação dos resultados
    printf("\nSoma: %d", soma);
    printf("\nSubtracao: %f", sub);
    printf("\nMultiplicacao: %d", mult);
    printf("\nDivisao: %f", div);

return 0;
}