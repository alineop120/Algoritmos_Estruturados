/*
    Alocação com Vetor
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Alocação dinâmica de mémoria
        int *vetor;


        vetor = (int*)malloc(5 * sizeof(int));
        for (int i = 0; i < 5; i++)
        {
            vetor[i] = i + 1;
        }
    // Realocar memoria para aumentar o vetor
        vetor = (int*)realloc(vetor, 3 * sizeof(int));
        for (int i = 0; i < 8; i++)
        {
            printf("%d\n", vetor[i]);
        }
        for (int i = 0; i < 8; i++)
        {
            vetor[i] = i + 1;
        }
        for (int i = 0; i < 8; i++)
        {
            printf("%d\n", vetor[i]);
        }
        
        free(vetor); 

    return 0;
}