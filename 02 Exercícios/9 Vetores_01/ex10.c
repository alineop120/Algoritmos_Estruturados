/*
    Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e Imprima a média geral.
*/
#include <stdio.h>
#define TAM 15

int main()
{

    float notas[TAM], soma = 0, media;

    for(int i = 0; i < TAM; i++)
    {
        printf("Inserir as notas: ");
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma/TAM;

    printf("\nMedia geral: %.2f", media);

    return 0;
}