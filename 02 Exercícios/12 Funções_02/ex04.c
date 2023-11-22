/*
    Faça um procedimento que receba, por parâmetro, uma matriz 61x10. O procedimento deve somar individualmente as colunas da matriz e armazenar o resultado na 61a linha da matriz. O procedimento deve retornar a matriz alterada.
*/
#include <stdio.h>

void imprimirMatriz(int matriz[61][10])
{
    for(int i = 0; i < 61; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d\t", matriz[i][j]); 
        }
        printf("\n");
    }
}

void soma(int matriz[61][10])
{
    for(int j = 0; j < 10; j++)
    {
        matriz[60][j] = 0;
    }
    for(int j = 0; j < 10; j++)
    {
        for(int i = 0; i < 60; i++)
    {
        matriz[60][j] += matriz[i][j];
    }
    }
}

int main()
{
    int matriz[61][10];

    for(int i = 0; i < 61; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            matriz[i][j] = i * 10 + j; 
        }
    }

    soma(matriz);
    imprimirMatriz(matriz); //original

    return 0;
}

