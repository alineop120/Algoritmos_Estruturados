/*
    https://github.com/Codepeia/Structs/blob/main/cadastro.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_LISTA 3
//declaracao do registro
typedef struct
{
    char nome[30];
    int idade;
    int id;
    int status;
}
Pessoa; 

void cadastrar(Pessoa p[], int indice)
{
    p[indice].status = 1;       //ativo no momento do cadastro
    p[indice].id = rand() % 100;        //gerar id automatico 
    fflush(stdin);
    printf("\nDigite o nome da pessoa: ");
    fflush(stdin);
    fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
    fflush(stdin);
    printf("Digite a idade da pessoa: ");
    scanf("%d", &p[indice].idade);
}

void imprimirLista(Pessoa p[], int tamanhoLista)
{
    if(tamanhoLista == 0)
    {
        printf("\nlista vazia\n");
    }
    else
    {
        for(int i = 0 ; i < tamanhoLista; i++)
        {
            printf("\nNome: %s", p[i].nome);
            printf("Idade: %d", p[i].idade);
            printf("\nID: %d", p[i].id);
            if(p[i].status == 1){
                printf("\nStatus: Ativo\n");
            }
            else
            {
                printf("\nStatus: Inativo\n");
            }
        }
    }
}

void buscar(Pessoa p[], int tamanhoLista, int id)
{
    if(tamanhoLista == 0){
        printf("\nLista vazia\n");
        return;
    }
    else
    {
        for(int i = 0 ; i < tamanhoLista; i++)
        {
            if(p[i].id == id)
            {
                printf("\nRegistro encontrado");
                printf("\n\nNome: %s", p[i].nome);
                printf("Idade: %d", p[i].idade);
                return;
            }
        }
    }
    printf("\nRegistro não existe na lista");
}

void alterar(Pessoa p[], int tamanhoLista, int id)
{
    int opcao;
    if(tamanhoLista == 0)
    {
        printf("Lista vazia");
        return;
    }
    else
    {
        for(int i = 0; i < tamanhoLista; i++)
        {
            if(p[i].id == id)
            {
                printf("\nRegistro encontrado: ");
                printf("\n\nNome: %s", p[i].nome);
                printf("Idade: %d", p[i].idade);
                printf("\n");
                printf("\nDigite 1 para alterar nome");
                printf("\nDigite 2 para alterar Idade");
                printf("\nDigite 3 para alterar status");
                printf("\nDigite 4 para alterar todos");
                scanf("%d", &opcao);
                switch(opcao)
                {
                    case 1:
                        printf("\n\nAlteracao do nome: ");
                        fgets(p[i].nome, sizeof(p[i].nome), stdin);
                        break;
                    case 2: 
                        printf("\n\nAlteracao da idade: ");
                        scanf("%d", &p[i].idade);
                        break;
                    case 3:
                        printf("\n\nAlteracao do status: 1 = Ativo / 0 = Inativo ");
                        scanf("%d", &p[i].status);
                        break;
                    case 4:
                        printf("\n\nAlteracao do nome: ");
                        fflush(stdin);
                        fgets(p[i].nome, sizeof(p[i].nome), stdin);
                        fflush(stdin);
                        printf("\n\nAlteracao da idade: ");
                        fflush(stdin);
                        scanf("%d", &p[i].idade);
                        fflush(stdin);
                        printf("\n\nAlteracao do status: 1 = Ativo / 0 = Inativo ");
                        fflush(stdin);
                        scanf("%d", &p[i].status);
                        fflush(stdin);
                }
            }
        }
    }
}

void excluir(Pessoa p[], int tamanhoLista, int id)
{
        for(int i = 0; i < tamanhoLista; i++)
        {
            if(p[i].id == id){//registro encontrado
                for(int j = i; j < tamanhoLista-1; j++)
                {
                    p[j] = p[j - 1];
                }
                printf("Deletado com sucesso");
                return;
            }
        }
        printf("Id nao encontrado");
}

int main()
{
    Pessoa p[TAM_LISTA];
    int totalCadastro = 0, opcao, buscaId;

    do
    {
        printf("\nDigite 1 para cadastrar");
        printf("\nDigite 2 para mostrar lista");
        printf("\nDigite 3 para buscar");
        printf("\nDigite 4 para alterar");
        printf("\nDigite 5 para excluir");
        printf("\nDigite 0 para sair do sistema\n");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:  //cadastrar
                if(totalCadastro < TAM_LISTA)
                {
                    cadastrar(p, totalCadastro);
                    totalCadastro++;
                }
                else
                {
                    printf("Total de cadastros atingido");
                }
            break;
            case 2:
                //imprimir
                imprimirLista(p, totalCadastro);
            break;
            case 3:
                //buscar
                printf("\nDigite o ID para busca ");
                scanf("%d", &buscaId);
                buscar(p, totalCadastro, buscaId);
            break;
            case 4:
                //alterar
                printf("\nDigite o ID para alteracao ");
                scanf("%d", &buscaId);
                alterar(p, totalCadastro, buscaId);
            break;
            case 5:
                //excluir
                printf("\nDigite o ID para alteracao ");
                scanf("%d", &buscaId);
                excluir(p, totalCadastro, buscaId);
                totalCadastro--;
            break;
        }
    }
    while(opcao != 0);
    return 0;
}
