/*
    Implementar um sistema de controle de estoque com as funcionalidades de cadastrar produtos, consultar produtos, gerar relatório de produtos e remover produtos do estoque. Funções que deverão estar presentes no código:
        • Função que inicializa uma lista vazia; (0,5 ponto)
        • Função que adiciona um novo produto à lista de estoque. Ela solicita ao usuário informações como código, descrição, quantidade e valor do produto. (0,5 ponto)
        • Função que percorre a lista de estoque e imprime um relatório com as informações de cada produto, incluindo código, descrição, quantidade e valor. (0,5 ponto)
        • Função que permite ao usuário pesquisar um produto pelo código. (0,5 ponto)
        • Função que permite ao usuário remover um produto do estoque. Ela solicita o código do produto a ser removido e busca na lista o produto correspondente. Se encontrar o produto, o remove da lista. Caso contrário, exibe uma mensagem informando que o produto não está cadastrado. (1,0 ponto)
    O sistema deverá exibir um menu com as opções disponíveis e realizar as chamadas correspondentes às funções acima, de acordo com a escolha do usuário. O loop deverá continuar até que o usuário escolha sair do programa.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

// Estrutura para representar um produto
struct Produto {
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
};

// Estrutura para representar a lista de estoque
struct Estoque {
    struct Produto produtos[MAX_PRODUTOS];
    int numProdutos;
};

// Protótipos das funções
void inicializarEstoque(struct Estoque *estoque);
void adicionarProduto(struct Estoque *estoque);
void imprimirRelatorio(struct Estoque *estoque);
void pesquisarProduto(struct Estoque *estoque);
void removerProduto(struct Estoque *estoque);

int main() {
    struct Estoque estoque;
    int opcao;

    inicializarEstoque(&estoque);

    do {
        // Exibir menu
        printf("\nMenu:\n");
        printf("1 - Adicionar Produto\n");
        printf("2 - Imprimir Relatorio\n");
        printf("3 - Pesquisar Produto\n");
        printf("4 - Remover Produto\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarProduto(&estoque);
                break;
            case 2:
                imprimirRelatorio(&estoque);
                break;
            case 3:
                pesquisarProduto(&estoque);
                break;
            case 4:
                removerProduto(&estoque);
                break;
            case 0:
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}

void inicializarEstoque(struct Estoque *estoque) {
    estoque->numProdutos = 0;
}

void adicionarProduto(struct Estoque *estoque) {
    if (estoque->numProdutos < MAX_PRODUTOS) {
        printf("Informe os dados do produto:\n");
        printf("Codigo: ");
        scanf("%d", &estoque->produtos[estoque->numProdutos].codigo);
        printf("Descricao: ");
        scanf("%s", estoque->produtos[estoque->numProdutos].descricao);
        printf("Quantidade: ");
        scanf("%d", &estoque->produtos[estoque->numProdutos].quantidade);
        printf("Valor: ");
        scanf("%f", &estoque->produtos[estoque->numProdutos].valor);

        estoque->numProdutos++;
        printf("Produto adicionado com sucesso!\n");
    } else {
        printf("Limite de produtos atingido. Nao e possivel adicionar mais.\n");
    }
}

void imprimirRelatorio(struct Estoque *estoque) {
    if (estoque->numProdutos > 0) {
        printf("Relatorio de Produtos:\n");
        for (int i = 0; i < estoque->numProdutos; i++) {
            printf("Codigo: %d\n", estoque->produtos[i].codigo);
            printf("Descricao: %s\n", estoque->produtos[i].descricao);
            printf("Quantidade: %d\n", estoque->produtos[i].quantidade);
            printf("Valor: %.2f\n", estoque->produtos[i].valor);
            printf("---------------------------\n");
        }
    } else {
        printf("Nenhum produto cadastrado.\n");
    }
}

void pesquisarProduto(struct Estoque *estoque) {
    int codigoPesquisa;
    printf("Digite o codigo do produto a ser pesquisado: ");
    scanf("%d", &codigoPesquisa);

    int encontrado = 0;
    for (int i = 0; i < estoque->numProdutos; i++) {
        if (estoque->produtos[i].codigo == codigoPesquisa) {
            printf("Produto encontrado:\n");
            printf("Codigo: %d\n", estoque->produtos[i].codigo);
            printf("Descricao: %s\n", estoque->produtos[i].descricao);
            printf("Quantidade: %d\n", estoque->produtos[i].quantidade);
            printf("Valor: %.2f\n", estoque->produtos[i].valor);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Produto nao encontrado.\n");
    }
}

void removerProduto(struct Estoque *estoque) {
    int codigoRemover;
    printf("Digite o codigo do produto a ser removido: ");
    scanf("%d", &codigoRemover);

    int encontrado = 0;
    for (int i = 0; i < estoque->numProdutos; i++) {
        if (estoque->produtos[i].codigo == codigoRemover) {
            for (int j = i; j < estoque->numProdutos - 1; j++) {
                estoque->produtos[j] = estoque->produtos[j + 1];
            }
            estoque->numProdutos--;
            printf("Produto removido com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Produto nao encontrado.\n");
    }
}
