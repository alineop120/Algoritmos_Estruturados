#include <stdio.h>

//  Definiçaõ do Protótipo da Função
void soma();
int soma_retorno();

int main () {
//  Chamada da Função
    int retorno = soma_retorno();
    printf("\nRetorno da Funcao: %d", retorno);

    return 0;
}

void soma() {
//  Variavel Local
    int n1, n2, soma;
    printf("Digite n1:\n");
    scanf("%d", &n1);
    printf("\nDigite n2:\n");
    scanf("%d", &n2);
    soma = n1 + n2;
    printf("\nSoma: %d", soma);

}

int soma_retorno() {
    soma();

    /*int soma_valores = 10;
    return soma_valores;*/

    int soma_valores = soma();
    return soma_valores;
}