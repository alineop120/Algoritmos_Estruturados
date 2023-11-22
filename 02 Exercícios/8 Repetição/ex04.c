/*
    Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
*/
#include <stdio.h>

int main() 
{
    int numero;

    // Solicita ao usuário que insira um número positivo
    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) 
    {
        printf("O número deve ser positivo.\n");
    } 
    else 
    {
        printf("Os divisores do número %d são: ", numero);

        for (int i = 1; i <= numero; i++) 
        {
            if (numero % i == 0) 
            {
                printf("%d", i);

                // Verifica se não é o último divisor
                if (i != numero) 
                {
                    printf(", ");
                }
            }
        }

        printf("\n");
    }

return 0;
}
