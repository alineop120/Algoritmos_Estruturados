#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Alocação dinâmica de mémoria
        int *ponteiro;
        int numero; //Alocação Estática
        char *letra;

        ponteiro = (int*)malloc(sizeof(int));
        letra = (char*)malloc(sizeof(char));

        if (ponteiro == NULL)
        {
            printf("Sem memoria suficinte.");
            return;
        }

        printf("Conteudo do ponteiro: %p.", ponteiro);
        printf("\nEndereco do numero: %p.\n", &numero);
    
    // Inserção de Dados no espaço de memoria alocado
        *ponteiro = 10;
        *letra = 'A';

        printf("\nConteudo armazenado no endereco de memoria alocado: %d.", *ponteiro);
        printf("\nConteudo armazenado no endereco de memoria alocado: %c.", *letra);

    free(ponteiro);
    free(letra);
    return 0;
}