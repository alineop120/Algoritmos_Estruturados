#include <stdio.h>
#include <math.h> //potencia (pow(n1,n2))

/*
        OPERADORES RELACONAIS
    == igual                    <= menor ou igual que
    != diferente                > maior que
    >= maior ou igual que       < menor que          
*/
/*
    1 verdadeiro (true); 0 falso (false)
*/

int main() {
    //variaveis
    int x = 10, y = 10, resultado;

    /*
    Condição = se x for maioar que y, entao sera realizada a soma dos valores e apresentada soma. Senao apresentar uma mensagem informando que não podera ser realizada a soma.
    */
    if (x == y) {
        //executar esse trecho
        int soma;
        soma = x + y;
        printf("Soma: %d", soma);
    }else{
        printf("\nA expressao e falsa por isso esta sendo impresso.");

    }

    printf("\nContinua a execucao do algoritmo.");




    return 0;
}