#include <stdio.h>

/*
Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 
*/

int main () {
//  Variaveis
    float A, B, C, D, maior, menor;

//  Entrada dos Quartos Valores
    printf("Informe um numero (A): ");
    scanf("%f", &A);
    
    printf("Informe um numero (B): ");
    scanf("%f", &B);
    
    printf("Informe um numero (C): ");
    scanf("%f", &C);
    
    printf("Informe um numero (D): ");
    scanf("%f", &D);

//  Processamento de Dados
//      Se A for maior
    if ( (A > B) && (A > C) && (A > D) ) {
        maior = A;
        
    } else if ((B < C) && (B < D)) {
        menor = B;
        
    } else if (C < D) {
        menor = C;
        
    } else{
        menor = D;
    }

//      Se B for maior
    if ((B > A) && (B > C) && (B > D)) {
            maior = B;

        } else if ((A < C) && (A < D)) {
            menor = A;

        } else if (C < D) {
            menor = C;

        } else{
            menor = D;

        }

//      Se C for maior
    if ((C > A) && (C > B) && (C > D)) {
            maior = C;
            
        } else if ((A < B) && (A < D)) {
            menor = A;

        } else if (B < D) {
            menor = B;

        } else{
            menor = D;

        }

//      Se D for maior
    if ((D > A) && (D > B) && (D > C)) {
            maior = D;

        } else if ((A < B) && (A < C)) {
            menor = A;

        } else if (B < C) {
            menor = B;

        } else{
            menor = C;

        }
        
    //Saíde de dados
    printf("O MAIOR numero e %.2f e o MENOR numero e %.2f", maior, menor);

    return 0;

}
