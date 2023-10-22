/*
    Escreva um programa que receba um número qualquer e mostre o seu dobro.
*/
#include <stdio.h>
#include <math.h>

int main () 
{
    //Declaração das Variáveis
    int num, dobro;

    //Entrada de Dados
    printf("Digite um numero: ");
    scanf("%d", &num);

    //Operações
    dobro = num * 2;

    //Saída de Dados
    printf("O dobro desse numero e %d", dobro);

return 0;    
}