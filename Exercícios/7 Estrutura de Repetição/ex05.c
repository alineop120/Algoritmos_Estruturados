#include <stdio.h>

/*
Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. 
*/

int main () 
{
//  Variaveis
    int num = 0, res = 0;
    int cont = 1;
    
//  Estrutura
    while (cont <= 50) 
    {
        num = num + 2;
        res = res + num;
        printf("\n %d %d %d", cont, num, res);
        cont++;
    }

    printf("\nSoma dos 50 primeiros números pares: %d", res);

return 0;
}
