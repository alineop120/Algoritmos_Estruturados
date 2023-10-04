#include <stdio.h>

/* Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa
pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.*/

int main () {

    //Declaração das Variáveis
    int dia, mes, ano, idadeDia;


    //Entrada de Dados
    printf("informe o seu aniversario\n");
    printf("Dia / Mes / Ano\n");
    scanf("%d %d %d", &dia, &mes, &ano);

    //Operação
    idadeDia = (ano * 365) + (mes * 30) + (dia);

    //Saída de Dados
    printf("Dias vividos: %d", idadeDia);


    return 0;
}
