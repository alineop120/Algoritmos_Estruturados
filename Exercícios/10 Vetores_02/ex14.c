/*
    Faça um programa que leia um vetor de 1 o posições e verifique se existem valores iguais e os escreva na tela.
*/
#include <stdio.h>

int main()
{

    int vetor[10], igual;

    //inserir informacoes no vetor
    for(int i = 0; i < 10; i++)
    {
        printf("Inserir valor: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        igual = 0;
        //percorrer proximas posicoes para buscar valor igual
        for(int j = i + 1; j < 10; j++)
        {
            //se encontrar valor igual
            if(vetor[i] == vetor[j])
            {
                igual = 1;
            }
        }
        if(igual == 1)
        {
            printf("\nPossuem valores iguais: %d", vetor[i]);
        }
    }

    return 0;
}