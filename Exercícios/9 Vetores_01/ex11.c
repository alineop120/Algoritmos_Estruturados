/*
    Faça um programa que preencha um vetor com 1 O números reais, calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.
*/
#include <stdio.h>

int main()
{

    float valores[10], soma_positivos = 0, qtd_negativos = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Inserir as notas: ");
        scanf("%f", &valores[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        if(valores[i] > 0)
        {
            soma_positivos += valores[i];
        }
        else
        {
            qtd_negativos++;
        }
    }
    printf("\nSoma Positivos: %f . \nQuatidade Negativos: %f", soma_positivos, qtd_negativos);

    return 0;
}