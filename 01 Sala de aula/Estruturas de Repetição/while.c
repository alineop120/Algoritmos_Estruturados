#include <stdio.h>

/*
                    Estrutura de repetição - while
        ______________________________________________________________________________________________________________________
        O while é a estrutura de repetição mais simples. Ele repete a execução de um bloco de sentenças enquanto uma condição permanecer verdadeira. Na primeira vez que a condição se tornar falsa, o while não repetirá a execução do bloco, e a execução continuará com a sentença ou comando que vem logo após o bloco do while, na seqüência do programa.
        ESTRUTURA:
                while (expressão) {
                    sentença;
                    sentença;
                }
*/

int main () {
//
    int num = 2, numero, res;                        //tabuada de 2
    int contador = 0;

//
    while(numero <= 10){
        printf("\n%d", numero);
        numero++;
    }

    while (contador <= 10) {
        res = num * contador;
        printf("\n%d * %d = %d", num, contador, res);
        contador++;
    }
    

    return 0;
}