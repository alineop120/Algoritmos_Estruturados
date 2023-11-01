#include <stdio.h>

/*
Algoritmo que receba nota média, a frequencia e verificar se está aprovado ou reprovado.
    se media_final = 7.0 E frequencia >= 75
        "APROVADO"
    senao
        "REPROVADO"
*/

int main () {
    //Variaveis
    float media, frequencia;

    //Entrada de Dados
    printf("Informe a media do aluno: ");
    scanf("%f", &media);
    printf("Informe frequencia do aluno: ");
    scanf("%f", &frequencia);

    //Processamento de Dados e Saída de Dados
    if ((media >= 7 && frequencia >= 75)) {
        printf("APROVADO");

    } else if ((media >= 7 && frequencia < 75)) {
        printf("REPROVADO POR FALTA");

    } else if ((media >= 4 && media < 7 && frequencia > 75)) {
        printf("RECUPERAÇÃO")

    } else if ((media >= 4 && media < 7 && frequencia < 75)) {
        printf("REPROVADO POR FALTA");
    
    } else {
        printf("REPROVADO");
    }

    return 0;
}