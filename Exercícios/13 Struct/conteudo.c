#include <stdio.h>
#include <string.h>

// Declaração - Campo do registro
// Primeira maneira:
struct pessoa 
{
    char nome[20];
    int idade;
    float salario;
};

//Segunda maneira:
typedef struct 
{
    char rua[20];
    int num;
}Endereco;

int main()
{
    // Declaração de registro
    // Primeira maneira:
    struct pessoa pessoa1;
    // Segunda maneira:
    Endereco end;

/* 
    Problema no C:
    pessoa1.nome = "Maria";
*/

// Abrituição Direta
    strcpy(pessoa1.nome, "Maria");
    pessoa1.idade = 22;
    pessoa1.salario = 100.00;

// Saída da abrituição
    printf("Nome: %s", pessoa1.nome);
    printf("\nidade: %d", pessoa1.idade);
    printf("\nSalario: %.2f", pessoa1.salario);

// Entrada dos dados da rua e numero
    printf("\nDigite o nome da rua: ");
//  fgets(end.rua, 20, stdin);
    // Função - Sizeof
    fgets(end.rua, sizeof(end.rua), stdin);

    printf("\nDigite o numero da rua: ");
    scanf("%d", &end.num);

// Saída dos dados da rua e numero
    printf("\nRua: %s", end.rua);
    printf("Nuemro: %d", end.num);

    return 0;
}