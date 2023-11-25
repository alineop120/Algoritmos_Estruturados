/*
    Lista Rncadeada
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Pessoa
{
    int id;
    char nome[30];
    int idade;
    struct Pessoa *prox;
}
Pessoa;
Pessoa* criarListaVazia()
{
    return NULL;
}

int main()
{
    Pessoa *lista;
    lista = criarListaVazia();
    int opcao;

    do
    {
        printf("Digite um opcao a seguir:");
        printf("1 - cadastrar");
        printf("2 - mostrar");
        printf("3 - buscar um registro");
        printf("4 - alterar um registro");
        printf("5 - excluir um registro");
        printf("0 - sair do programa");
    
        switch (opcao)
        {
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        default:
            break;
        }

    } while (opcao != 0);
    

    return 0;
}