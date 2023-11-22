/*
    Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
*/
#include <stdio.h>

int main() 
{

    int vetor[6];

    for (int i = 0; i < 6; i++) 
    {
        printf("Digite os numeros: ");
        scanf("%d", &vetor[i]); 
    }
    for (int i = 0; i < 6; i++) 
    {
        printf("\n%d",vetor[i]); 
    }

    return 0;
}