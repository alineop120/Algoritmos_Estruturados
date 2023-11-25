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

Pessoa* criarPessoa(){
    Pessoa *novaPessoa = (Pessoa*)malloc(sizeof(Pessoa));
    if (novaPessoa == NULL)
    {
        printf("Erro de alocacao de memoria");
        exit(EXIT_FAILURE);
    }
}

Pessoa* cadastrar(Pessoa *lista)
{
    Pessoa *novaPessoa = criarPessoa();
    srand(time(NULL));
    novaPessoa->id = rand() % 100;
    printf("\nDigite o nome: ");
    fflush(stdin);
    fgets(novaPessoa->nome, sizeof(novaPessoa->nome), stdin);
    printf("\nDigite a idade: ");
    fflush(stdin);
    scanf("%d", &novaPessoa->idade);

    if (lista == NULL)
    {
        return novaPessoa;
    }
    else
    {
        Pessoa* atual = lista;
        while(atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = novaPessoa;
        return lista;
    }
}

void mostrarLista(Pessoa *lista)
{
    Pessoa *atual = lista;
    if (atual == NULL)
    {
        printf("Lista vazia.");
        return;
    }
    else
    {
        while(atual != NULL)
        {
            printf("Nome: %s", atual->nome);
            printf("ID: %d", atual->id);
            printf("Nome: %d", atual->idade);
            printf("\n");
            atual = atual->prox;
        }
    }  
}

int main()
{
    Pessoa *lista;
    lista = criarListaVazia();
    int opcao;

    do
    {
        printf("Digite um opcao a seguir:\n");
        printf("1 - cadastrar\n");
        printf("2 - mostrar\n");
        printf("3 - buscar um registro\n");
        printf("4 - alterar um registro\n");
        printf("5 - excluir um registro\n");
        printf("0 - sair do programa\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            lista = cadastrar(lista);
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