/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. 
*/
#include <stdio.h>

int main () 
{
//  Variáveis
    int num;

//
    printf("Informe quantos numeros de 10 a 50: ");
    scanf("%d", &num);

    int cont = num;

//  Estrutura - Ordem Decrescente
    while (cont >= 0) 
    {
        printf("\n%d", cont);
        cont--;
    }
return 0;
}