#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int idade;
    float media;
}
Aluno;

// Função: Cadastrar (retorna o endereço com o cadastro inserido).
Aluno* cadastrar()
{
    Aluno *aluno = (Aluno*)malloc(sizeof(Aluno));
/* ou
    Aluno *aluno 
    aluno = (Aluno*)malloc(sizeof(Aluno));*/

    printf("Digite o nome: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    printf("Digite a idade: ");
    scanf("%d", &aluno->idade);
    printf("Digite a media: ");
    scanf("%f", &aluno->media);

    return aluno;
}

int main()
{
    // Alocação Dinâmica de Memoria para Structs
        Aluno *a;

        a = cadastrar();

        printf("Nome: %s", a->nome);
        printf("Idade: %d", a->idade);
        printf("Media: %.2f", a->media);
}