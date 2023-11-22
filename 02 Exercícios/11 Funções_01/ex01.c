/*
    Escreva uma função que receba por parâmetro dois números e retorne o maior deles.
*/
#include <stdio.h>

int maior(int n1, int n2) 
{
    if (n1 > n2) 
    {
        return n1;
    } 
    else 
    {
        return n2;
    }
}

int main() 
{
    int num1, num2;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);

    int resultado = maior(num1, num2);

    printf("O maior valor e: %d", resultado);

    return 0;
}