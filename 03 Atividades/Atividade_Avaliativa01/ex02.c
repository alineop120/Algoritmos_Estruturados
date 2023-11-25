/*
    Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. 
*/
#include <stdio.h>

int main() 
{
    double chico = 1.50; 
    double ze = 1.10;    
    double crescimento_chico = 0.02; 
    double crescimento_ze = 0.03; 
    int anos;

    anos = ((chico - ze) / (crescimento_ze - crescimento_chico));

    printf("Serao necessarios %d anos para que Ze seja maior que Chico.\n", anos);
    
return 0;
}
