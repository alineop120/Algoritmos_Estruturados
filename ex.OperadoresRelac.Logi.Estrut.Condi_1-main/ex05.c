#include <stdio.h>

/*
Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores. 
*/

int main () {
    //Variaveis
    int num;

    //Entrada de dados
    printf("informe o numero: ");
    scanf("%d", &num);

    //Processando os números
    if ( (num == 5) || (num == 200) || (num == 400) || (num == 200) ) {
        printf("O numero pode ser igual a %d", num);

    } else if ( (num > 500) && (num < 1000) ) {
        printf("Intervalo entre 500 e 1000.");

    } else {
        printf("Esta fora dos escopos anteriores.");

    }

    return 0;
}