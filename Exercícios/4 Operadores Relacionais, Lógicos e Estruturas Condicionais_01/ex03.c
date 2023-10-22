/*
    Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma ascendente (do menor para o maior).
*/
#include <stdio.h>

int main() 
{
    //Variáveis
    int A, B, C;

    //Entrada dos Valores
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    //Operação dos Valores
    if (A <= B && A <= C) 
    {
        if (B <= C) 
        {
            printf("ASCENDENTE: %d, %d, %d\n", A, B, C);  
        } 
        else 
        {
            printf("ASCENDENTE: %d, %d, %d\n", A, C, B);   
        }
    } 
    else if (B <= A && B <= C) 
    {
        if (A <= C) 
        {
            printf("ASCENDENTE: %d, %d, %d\n", B, A, C);
        } 
        else 
        {
            printf("ASCENDENTE: %d, %d, %d\n", B, C, A);
        }
    } 
    else 
    {
        if (A <= B) 
        {
            printf("ASCENDENTE: %d, %d, %d\n", C, A, B);
        } 
        else 
        {
            printf("ASCENDENTE: %d, %d, %d\n", C, B, A);
        }
    }

return 0;
}
