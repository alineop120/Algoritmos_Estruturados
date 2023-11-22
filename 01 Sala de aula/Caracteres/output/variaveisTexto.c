#include <stdio.h>
#include <stdlib.h>

int main () {
                //variaveis que armazenam texto
        char nome [50] = "Antonio Maria das Gracas da Silva";
        char endereco [30];
        char pais [40];

        printf ("O nome e: %s", nome);

                //recebendo dados com scanf
        printf("\nDigite o endereco: ");
        scanf ("%[^\n]", endereco);
        fflush(stdin);
        printf ("O endereco: %s", endereco);

                //recebendo dados com fgets
        printf ("\nDigite o pais: ");
        fgets(pais, 40, stdin);
        printf ("\nO pais e: %s", pais);

return 0;
}