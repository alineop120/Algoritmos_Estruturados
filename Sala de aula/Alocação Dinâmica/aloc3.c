#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int idade;
    float media;
}
Aluno;

int main()
{
    // Alocação Dinâmica de Memoria para Structs
        Aluno *a;

        a = (Aluno*)malloc(sizeof(Aluno));

        printf("Digite o nome: ");
        fgets(a->nome, sizeof(a->nome), stdin);
        printf("Digite a idade: ");
        scanf("%d", &a->idade);
        printf("Digite a media: ");
        scanf("%f", &a->media);

        printf("Nome: %s", a->nome);
        printf("idade: %d", a->idade);
        printf("Media: %.2f", a->media);
}