#include <stdio.h>
#define TAM 3

//modelo do registro
typedef struct 
{
    char nome[20];
    int idade;
    int id;
}
Aluno;

void cadastrar(Aluno a[], int indice)
{
    printf("Digite o id: ");
    fflush(stdin);
    scanf("%d", &a[indice].idade);
    fflush(stdin);
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
            printf("Nome: %s", a[i].nome);
            printf("Idade: %d", a[i].idade);
            printf("\n\n");
        }
        
    }
    
}

void buscarRegistro(Aluno a[], int totalCadastro, int buscarId)
{
    if (totalCadastro == 0)
    {
        printf("Nao existe na lista.");
    }
    else
    {
        for (int i = 0; i < totalCadastro; i++)
        {
            if (a[i].id == buscarId) 
            {
                printf("Nome do registro encontrado: %s", a[i].nome);
                return;
            } 
        }
        
    }
    printf("Registro nao encontrado.");
    printf("\n\n");
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
            //Buscar cadastro
            printf("Digite o id para buscar: ");
            scanf("%d", &buscarId);
            buscarRegistro(a, totalCadastro, buscarId);

        default:
            break;
        }
    } 
    while (opcao != 0);
    
    
    
    return 0;
}