#include <stdio.h>

int main () {
//  Variaveis
    int numero;

//  PROCESSAMENTO
//    INCREMENTO

    printf("%d", numero);

    numero++; //Adicionar uma unidade

    printf("\n%d", numero);

    numero++;

    printf("\n%d", numero);

    numero += 5; //Pode ser também "numero = numero + 5;"

//    DECREMENTO

    numero --; // Subtraindo uma unidade

    printf("%d", numero);

    numero -= 20;

    printf("\n%d", numero);

    
    return 0;
}