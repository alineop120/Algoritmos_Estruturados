/*
    Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor).
*/
#include <stdio.h>

int main() 
{
    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    if (A >= B && A >= C) 
    {
        if (B <= C) 
        {
            printf("DESCENDENTE: %d, %d, %d\n", A, B, C);
        } 
        else 
        {
            printf("DESCENDENTE: %d, %d, %d\n", A, C, B);
        }
    } 
    else if (B >= A && B >= C) 
    {
        if (A <= C) 
        {
            printf("DESCENDENTE: %d, %d, %d\n", B, A, C);
        } 
        else 
        {
            printf("DESCENDENTE: %d, %d, %d\n", B, C, A);
        }
    } 
    else 
    {
        if (A <= B) 
        {
            printf("DESCENDENTE: %d, %d, %d\n", C, A, B);
        } 
        else 
        {
            printf("DESCENDENTE: %d, %d, %d\n", C, B, A);
        }
    }

return 0;
}
