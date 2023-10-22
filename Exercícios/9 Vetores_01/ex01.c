/*
    Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
        (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
        () Armazene em uma variável inteira (simples) a soma entre os valores das posições A[O], A[1] e A[5] do vetor e mostre na tela esta soma.
        (c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
        (d) Mostre na tela cada valor do vetor A, um em cada linha.
*/
#include <stdio.h>

int main()
{

    int A[6] = {1, 0, 5, -2, -5, 7}, soma = 0;

    /* 
    soma = A[0] + A[1] + A[5];

    printf("%d", soma);

    A[4] = 100;

    printf("\n%d", A[0]);
    printf("\n%d", A[1]);
    printf("\n%d", A[2]);
    printf("\n%d", A[3]);
    printf("\n%d", A[4]);
    printf("\n%d", A[5]);
    */

    for (int i = 0; i < 6; i++)
    {
        //somando somente alguns indices
        if (i == 0 || i == 1 || i == 5) 
        {
            soma += A[i];
        }
        if (i == 4) 
        {
            A[i] = 100;
        }
        printf("\n%d", A[i]);
    }
    
    printf("\n\n%d", soma);

    return 0;
}