#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//modelo do registro
typedef struct 
{
    char nome[20];
    int idade;
    int id;
    int status;
}
Aluno;

void cadastrar(Aluno a[], int indice)
{
    a[indice].status = 1;
    a[indice].id = rand() % 200;
    printf("Digite o nome do aluno: ");
    fflush(stdin);
    fgets(a[indice].nome, sizeof(a[indice].nome), stdin);
    fflush(stdin);
    printf("Digite a idade do aluno: ");
    fflush(stdin);
    scanf("%d", &a[indice].idade);
    fflush(stdin);
    printf("\n\n");

}

void imprimir(Aluno a[], int totalCadastro)
{
    if (totalCadastro == 0)
    {
        printf("Nao existe alunos cadastrados.");
    }
    else
    {
        for (int i = 0; i < totalCadastro; i++)
        {
            printf("\nId: %d", a[i].id);
            printf("\nNome: %s", a[i].nome);
            printf("\nIdade: %d", a[i].idade);
            a[i].status == 1 ? printf("\nStatus: Ativo") : printf("\nStatus: Inativo");     //operador ternário
            printf("\n\n");
        }
        
    }
    
}

void buscarRegistro(Aluno a[], int totalCadastro, int buscarId)
{
    if (totalCadastro == 0)
    {
        printf("\nNao existe cadastro na lista.");
        return;
    }
    else
    {
        for (int i = 0; i < totalCadastro; i++)
        {
            if (a[i].id == buscarId) 
            {
                printf("\nNome do registro encontrado: %d", a[i].nome);
                return;
            } 
        }
        
    }
    printf("\nRegistro nao encontrado.");
    printf("\n\n");
}

void alterarRegistro(Aluno a[], int totalCadastro, int buscarId) 
{
    int opcaoEscolhida;
    
    if (totalCadastro == 0)
    {
        printf("Lista vazia.");
        return;
    }
    else
    {
        for (int i = 0; i < totalCadastro; i++)
        {
            if (a[i].id == buscarId)
            {
                printf("\nNome: %s", a[i].nome);
                printf("\nIdade: %d", a[i].idade);
                printf("\nStatus: %d", a[i].status);

                printf("Alterar os dados: ");

                printf("Ditige 1 para alterar o nome, Digite 2 para alterar a idade, Digite 3 para alterar o status ou Digite 4 para alterar todos os campos");
                scanf("%d", &opcaoEscolhida);
                switch (opcaoEscolhida)
                {
                case 1:
                    printf("Alteracao do nome:");
                    fflush(stdin);
                    fgets(a[i].nome, sizeof(a[i].nome), stdin);
                    fflush(stdin);
                    break;
                case 2:
                    printf("Alteracao da idade:");
                    fflush(stdin);
                    scanf("%d", &a[i].idade);
                    fflush(stdin);
                    break;
                case 3:
                    printf("Alteracao do status: 1 - Ativo / 0 - Inativo");
                    fflush(stdin);
                    scanf("%d", &a[i].status);
                    fflush(stdin);
                    break;
                case 4:
                    printf("Alteracao do nome:");
                    fflush(stdin);
                    fgets(a[i].nome, sizeof(a[i].nome), stdin);
                    fflush(stdin);
                    printf("Alteracao da idade:");
                    scanf("%d", &a[i].idade);
                    fflush(stdin);
                    printf("Alteracao do status: 1 - Ativo / 0 - Inativo");
                    fflush(stdin);
                    scanf("%d", &a[i].status);
                    fflush(stdin);
                    break;
                }
            }
            
        }
        
    }
    
}

void excluirRegistro(Aluno a[], int totalCadastro, int buscarId)
{
    if (totalCadastro == 0)
    {
        printf("Lista vazia.");
        return;
    }
    else
    {
        for(int i = 0; i < totalCadastro; i++)
        {
            if(a[i].id = buscarId)
            {
                //registro encontrado - exclusão
                for (int j = i; j < totalCadastro - 1; j++)
                {
                    a[j] = a[j + 1];
                }
                printf("Excluido com sucesso.");
            }
        }
    }
}

int main () 
{
    Aluno a[TAM];
    int opcao, totalCadastro = 0, buscarId;

    do
    {
        printf("Digite 1 para cadastrar\n");
        printf("Digite 2 para imprimir os cadastros\n");
        printf("Digite 3 para buscar um cadastro\n");
        printf("Digite 4 para alterar cadastro\n");
        printf("Digite 5 para excluir o cadastro\n");
        printf("Digite 0 para encerrar o programa\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            //cadastrar
            if(totalCadastro < TAM)
            {
                cadastrar(a, totalCadastro);
                totalCadastro++;
            }
            else
            {
                printf("Limite maximo de cadastro atingido.");
            }
            break;
        case 2:
            //mostrar todos os cadastros
            imprimir(a, totalCadastro);
            break;
        case 3:
            //buscar cadastro
            printf("Digite o id para buscar: ");
            scanf("%d", &buscarId);
            buscarRegistro(a, totalCadastro, buscarId);
            break;
        case 4:
            //alterar
            printf("Digite o id para alterar: ");
            scanf("%d", &buscarId);
            alterarRegistro(a, totalCadastro, buscarId);
            break;
        case 5:
            //excluir
            printf("Digite o id para excluir: ");
            scanf("%d", &buscarId);
            excluirRegistro(a, totalCadastro, buscarId);
            totalCadastro--;
            break;
        }
    } 
    while (opcao != 0);
    return 0;
}