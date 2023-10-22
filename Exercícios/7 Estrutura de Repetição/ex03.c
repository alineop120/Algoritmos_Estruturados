/*
Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional
*/
#include <stdio.h>

int main () 
{
//  Variáveis
    int num;
    int cont = 1;

//
    printf("Informe quantos numeros de 10 a 50: ");
    scanf("%d", &num);

//  Estrutura - Números Naturais Ímpares
    while (cont <= num) 
    {
        printf("\n%d", cont);
        cont +=2;
    }
return 0;
}