/*

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 1000

// Definição da estrutura do usuário
struct Usuario {
    int id;
    char nome[50];
    char email[50];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;
};

// Protótipos das funções
void cadastrarUsuario(struct Usuario usuarios[], int *numUsuarios) {
    if (*numUsuarios < MAX_USERS) {
        struct Usuario novoUsuario;
        novoUsuario.id = rand();  // Gera um ID aleatório
        printf("Nome: ");
        scanf("%s", novoUsuario.nome);
        printf("Email: ");
        scanf("%s", novoUsuario.email);
        // Adicione validações para sexo, altura e vacina conforme necessário
        printf("Sexo: ");
        scanf("%s", novoUsuario.sexo);
        printf("Endereco: ");
        scanf("%s", novoUsuario.endereco);
        printf("Altura: ");
        scanf("%lf", &novoUsuario.altura);
        printf("Vacina (1 para sim, 0 para nao): ");
        scanf("%d", &novoUsuario.vacina);

        usuarios[*numUsuarios] = novoUsuario;
        (*numUsuarios)++;
        printf("Usuario cadastrado com sucesso!\n");
    } else {
        printf("Limite de usuarios atingido. Nao e possivel cadastrar mais.\n");
    }
}

void editarUsuario(struct Usuario usuarios[], int numUsuarios) {
    int idEditar;
    printf("Digite o ID do usuario a ser editado: ");
    scanf("%d", &idEditar);

    int encontrado = 0;
    for (int i = 0; i < numUsuarios; i++) {
        if (usuarios[i].id == idEditar) {
            printf("Novo nome: ");
            scanf("%s", usuarios[i].nome);
            printf("Novo email: ");
            scanf("%s", usuarios[i].email);
            // Adicione validações para sexo, altura e vacina conforme necessário
            printf("Novo sexo: ");
            scanf("%s", usuarios[i].sexo);
            printf("Novo endereco: ");
            scanf("%s", usuarios[i].endereco);
            printf("Nova altura: ");
            scanf("%lf", &usuarios[i].altura);
            printf("Vacina atualizada (1 para sim, 0 para nao): ");
            scanf("%d", &usuarios[i].vacina);

            printf("Usuario editado com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Usuario nao encontrado.\n");
    }
}

void excluirUsuario(struct Usuario usuarios[], int *numUsuarios) {
    int idExcluir;
    printf("Digite o ID do usuario a ser excluido: ");
    scanf("%d", &idExcluir);

    int encontrado = 0;
    for (int i = 0; i < *numUsuarios; i++) {
        if (usuarios[i].id == idExcluir) {
            for (int j = i; j < *numUsuarios - 1; j++) {
                usuarios[j] = usuarios[j + 1];
            }
            (*numUsuarios)--;
            printf("Usuario excluido com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Usuario nao encontrado.\n");
    }
}

void buscarPorEmail(struct Usuario usuarios[], int numUsuarios) {
    char emailBusca[50];
    printf("Digite o email do usuario a ser buscado: ");
    scanf("%s", emailBusca);

    int encontrado = 0;
    for (int i = 0; i < numUsuarios; i++) {
        if (strcmp(usuarios[i].email, emailBusca) == 0) {
            printf("Usuario encontrado:\n");
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome: %s\n", usuarios[i].nome);
            printf("Email: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereco: %s\n", usuarios[i].endereco);
            printf("Altura: %.2lf\n", usuarios[i].altura);
            printf("Vacina: %d\n", usuarios[i].vacina);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Usuario nao encontrado.\n");
    }
}

void imprimirUsuarios(struct Usuario usuarios[], int numUsuarios) 
{
    if (numUsuarios > 0) 
    {
        printf("Lista de usuarios:\n");
        for (int i = 0; i < numUsuarios; i++) 
        {
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome: %s\n", usuarios[i].nome);
            printf("Email: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereco: %s\n", usuarios[i].endereco);
            printf("Altura: %.2lf\n", usuarios[i].altura);
            printf("Vacina: %d\n", usuarios[i].vacina);
            printf("---------------------------\n");
        }
    } 
    else 
    {
        printf("Nenhum usuario cadastrado.\n");
    }
}

// Código Principal
int main() 
{
    struct Usuario usuarios[MAX_USERS];
    int numUsuarios = 0;
    char opcao;

    do 
    {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Cadastrar usuario\n");
        printf("2 - Editar usuario\n");
        printf("3 - Excluir usuario\n");
        printf("4 - Buscar usuario por email\n");
        printf("5 - Imprimir todos os usuarios\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) 
        {
            case '1':
                cadastrarUsuario(usuarios, &numUsuarios);
                break;
            case '2':
                editarUsuario(usuarios, numUsuarios);
                break;
            case '3':
                excluirUsuario(usuarios, &numUsuarios);
                break;
            case '4':
                buscarPorEmail(usuarios, numUsuarios);
                break;
            case '5':
                imprimirUsuarios(usuarios, numUsuarios);
                break;
            case '0':
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != '0');

    return 0;
}

