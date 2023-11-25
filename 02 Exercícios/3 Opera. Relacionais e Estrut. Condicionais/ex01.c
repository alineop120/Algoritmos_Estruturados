/*
    Leia a idade e imprima se a paessoa é de maior.
*/
#include <stdio.h>

int main ()
{
    //Variaveis
    float idade;

    //Entrada de Dados
    printf("Digite sua idade: ");
    scanf("%f", &idade);

    //Processamento e Saíde de dados
    //Estrutua Condicional ou de Seleção
    if (idade >= 18) 
    {   // Verdadeiro
        printf("Maior de idade.");
    } 
    else 
    {
        printf("Menor de idade.");
    }
    
return 0;
} 