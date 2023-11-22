#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Alocação dinâmica de mémoria
        int *ponteiro;
        int numero; //Alocação Estática

        ponteiro = (int*)malloc(sizeof(int));

        if (ponteiro == NULL)
        {
            printf("Sem memoria suficinte.");
        }

        printf("Conteudo do ponteiro: %p.", ponteiro);
        printf("\nEndereco do numero: %p.\n", &numero);
    
    // Inserção de Dados no espaço de memoria alocado
        *ponteiro = 10;

        printf("\nConteudo armazenado no endereco de memoria alocado: %d.", *ponteiro);

    return 0;
}