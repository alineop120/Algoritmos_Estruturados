/*
    Faça um procedimento que receba uma matriz A(10,10), por parâmetro, e realize as seguintes trocas:
        (a) a linha 2 com a linha 8;
        (b) a coluna 4 com a coluna 10;
        (c) a diagonal principal com a secundária;
        (d) a linha 5 com a coluna 10.
    O procedimento deve retornar a matriz alterada.
*/
#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int matriz[10][10])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d\t", matriz[i][j]); 
        }
        printf("\n");
    }
}
// (a) a linha 2 com a linha 8
void troca_linha2Linha8(int matriz[10][10])
{
    int aux;

    for (int j = 0; j < 10; j++)
    {
        aux = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = aux;
    }
    
}

int main()
{
    int matriz[10][10];

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            matriz[i][j] = i * 10 + j; 
        }
    }

    imprimirMatriz(matriz);

}
/*
    trocar L2 com L8 (matriz[10][10])
    {
        for (int i = 0; i < 10; i++)
        {
            int temp;
            temp = matriz[i][i];
            matriz[i][3] = matriz[i][9 - i];
            matriz[i][9] = temp;
        }
    }
*/