/*
    Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem Inversa.
*/
#include<stdio.h>

int main()
{
    int vetor[5], num, contador = 0;

    //incluir somente pares no vetor
    do
    {
        printf("Digite um numero PAR: ");
        scanf("%d", &num);
        if(num % 2 == 0)
        {
            vetor[contador] = num;
            contador++;
        }
        else
        {
            printf("Numero invalido!\n");
        }
    }while(contador < 5);

    //ordem normal
    printf("\n\nORDEM NORMAL");
    for(int i = 0; i < 5; i++)
    {
        printf("\n%d", vetor[i]);
    }
    //ordem inversa
    printf("\n\nORDEM INVERDIDA");
    for(int i = 4; i >= 0; i--)
    {
        printf("\n%d", vetor[i]);
    }

    return 0;
}