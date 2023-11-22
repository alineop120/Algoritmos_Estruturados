#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    int matricula;
}Aluno;

int main() 
{
    Aluno aluno[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Digite o nome do aluno: ");
        fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
        printf("\nDigite a matricula: ");
        scanf("%d", &aluno[i].matricula);
        fflush(stdin);
        printf("\n");
    }
    
    for(int i = 0; i < 2; i++)
    {
        printf("Nome: %s", aluno[i].nome);
        printf("\nMatricula: %d", aluno[i].matricula);
    }

    return 0;
}

