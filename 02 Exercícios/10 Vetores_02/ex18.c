/*
    Faça um programa que leia um vetor de 1O números. Leia um número x. Conte os múltiplos de um número inteíro x num vetor e mostre-os na tela.
*/
#include <stdio.h>
#include <math.h>

int main() {
    // Variáveis
    int vetor[10], x, y;

    // Entrada de Dados
    for (int i = 0; i < 10; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("Informe um numero para a variavel x: ");
    scanf("%d", &x);

    // Processamento de Dados
    for (int i = 0; i < 10; i++)
    {        
        y = vetor[i] % x;
        
        if (y == 0) 
        {
            printf("Esse numero %d e multiplo de %d.", vetor[i], x);
        } 
    }

    return 0;
}