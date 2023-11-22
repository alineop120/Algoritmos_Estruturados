#include <stdio.h>

/*
    OPERADORES LÓGICOS
Operador  | Descrição
E (&&)    | Verdadeiro se e somente se todas as condições forem verdadeiras
OU (||)   | Vedadeiro se e somente se pelo menos uma das condições foram verdadeiras
NÃO (!)   | Vedadeiro se a condição for falsa. Falso se a condição for vedadeira
*/

int main () {
    //
    int x = 10, y = 12;

    //
    if (!((x > y && y > 20) || (y == 12))) {
        printf("Verdadeiro");
    } else {
        printf("Falso");
    }

}