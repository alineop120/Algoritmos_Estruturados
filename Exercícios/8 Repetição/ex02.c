/*
    Em um prédio, com 50 moradores, há três elevadores denominados A, B e C. Para otimizar o sistema de controle dos elevadores, foi realizado um levantamento no qual cada usuário respondia: 
    -> o elevador que utilizava com mais frequência; 
    -> o período que utilizava o elevador, entre:
        “M” = matutino; 
        “V” = vespertino; 
        “N” = noturno. 

    Construa um algoritmo que calcule e imprima:
    -> qual o período mais usado de todos e a que elevador pertence;
    -> qual é o elevador mais frequentado e em que período se concentra o maior fluxo;
    -> qual a diferença percentual entre o mais usado dos horários e o menos usado;
    -> qual a percentagem sobre o total de serviços prestados do elevador de média utilização. 
*/
#include <stdio.h>

int main() 
{
    int num_moradores = 50;
    int elevador_A = 0, elevador_B = 0, elevador_C = 0;
    int matutino = 0, vespertino = 0, noturno = 0;
    int total_servicos = 0;

    for (int i = 0; i < num_moradores; i++) 
    {
        char elevador, periodo;

        printf("Morador %d: Qual elevador você utiliza com mais frequência (A/B/C)? ", i + 1);
        scanf(" %c", &elevador);

        printf("Qual período você utiliza o elevador (M/V/N)? ");
        scanf(" %c", &periodo);

        total_servicos++;

        switch (elevador) 
        {
            case 'A':
                elevador_A++;
                break;
            case 'B':
                elevador_B++;
                break;
            case 'C':
                elevador_C++;
                break;
        }

        switch (periodo) 
        {
            case 'M':
                matutino++;
                break;
            case 'V':
                vespertino++;
                break;
            case 'N':
                noturno++;
                break;
        }
    }

    char periodo_mais_usado;
    int max_periodo = matutino;
    if (vespertino > max_periodo) 
    {
        max_periodo = vespertino;
        periodo_mais_usado = 'V';
    }
    if (noturno > max_periodo) 
    {
        max_periodo = noturno;
        periodo_mais_usado = 'N';
    }

    char elevador_mais_frequentado;
    int max_elevador = elevador_A;
    if (elevador_B > max_elevador) 
    {
        max_elevador = elevador_B;
        elevador_mais_frequentado = 'B';
    }
    if (elevador_C > max_elevador) 
    {
        max_elevador = elevador_C;
        elevador_mais_frequentado = 'C';
    }

    double diferenca_percentual = ((double)(max_periodo - matutino) / total_servicos) * 100;

    double percentagem_elevador_media = ((double)(elevador_B + elevador_C) / total_servicos) * 100;

    printf("Período mais usado: %c (%d vezes), pertence ao elevador %c\n", periodo_mais_usado, max_periodo, elevador_mais_frequentado);
    printf("Elevador mais frequentado: %c (%d vezes), concentra-se no período %c\n", elevador_mais_frequentado, max_elevador, periodo_mais_usado);
    printf("Diferença percentual entre o mais usado e o menos usado: %.2lf%%\n", diferenca_percentual);
    printf("Percentagem sobre o total de serviços prestados do elevador de média utilização: %.2lf%%\n", percentagem_elevador_media);

return 0;
}
