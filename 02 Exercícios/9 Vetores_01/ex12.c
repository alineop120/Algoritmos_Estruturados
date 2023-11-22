/*
    Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com o maior, o menor e a média dos valores.
*/
#include <stdio.h>

int main()
{

    int vetor[5], maior, menor, soma = 0, media;

    for(int i = 0; i < 5; i++)
    {
        printf("Inserir os valores: ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 5;

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0; i < 5; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if(vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    printf("\nMedia: %d. \nMaior: %d. \nMenor: %d", media, maior, menor);

    return 0;
}