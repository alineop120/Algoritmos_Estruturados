/*
    Dado três valores, A, B e C, construa um algoritmo para     verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.
*/
#include <stdio.h>

int main()
{
//  Varíaveis
    double lado_A, lado_B, lado_C;

//  Entrada de Dados - Lados A, B e C do triângulo
    printf("Informe o valor do lado A do triangulo: ");
    scanf("%lf", &lado_A);
    printf("Informe o valor do lado B do triangulo: ");
    scanf("%lf", &lado_B);
    printf("Informe o valor do lado C do triangulo: ");
    scanf("%lf", &lado_C);

    // Processamento de Dados - Verificando se os lados de um triângulo formam válido
    if (lado_A + lado_B > lado_C && lado_A + lado_C > lado_B && lado_B + lado_C > lado_A)
    {
        if (lado_A == lado_B && lado_B == lado_C)
        {
            printf("E um triangulo equilátero.\n");
        } else if (lado_A == lado_B || lado_A == lado_C || lado_B == lado_C)
        {
            printf("E um triangulo isosceles.\n");
        }
        else
        {
            printf("E um triangulo escaleno.\n");
        }
    } 
    else
    {
        printf("Nao formam um triangulo.\n");
    }

return 0;
}
