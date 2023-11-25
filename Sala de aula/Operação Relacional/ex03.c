#include <stdio.h>
/*
Leia a altura e imprima se é maior que 1.8m;
*/

int main () {
    //Variaveis
    float altura; //Pergunta: diferencia entre "int", "float", "double". Em qual momento usar?

    //Entrada de Dados
    printf("Informe sua altura: ");
    scanf("%f", &altura);

    //Processamento e Saída de Dados
    if (altura > 1.8) {
        printf("Sua altura e maior que 1.8m.");

    } else {
        printf("Sua altura e menor que 1.8m.");
    }


    return 0;
}