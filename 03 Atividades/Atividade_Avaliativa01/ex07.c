/*
    Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*4 ) / 10

    Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.
*/
#include <stdio.h>

int main() 
{
//  Variaveis
    int num_alunos = 30;
    double media_geral = 0.0;

//  Entrada de Dados
    for (int i = 0; i < num_alunos; i++)
    {
        double n1, n2, n3;
        double media_ponderada;

        printf("Informe as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);

//  Calcula a média ponderada
        media_ponderada = (n1 * 2 + n2 * 4 + n3 * 4) / 10;

        printf("Média do aluno %d: %.2lf\n", i + 1, media_ponderada);

//  Verifica se o aluno foi aprovado ou reprovado
        if (media_ponderada >= 7.0)
        {
            printf("Aprovado\n");
        } 
        else 
        {
            printf("Reprovado\n");
        }

//  Acumula a média para cálculo da média geral
        media_geral += media_ponderada;
    }

//  Calcula a média geral da turma
    media_geral /= num_alunos;
    
    printf("Média geral da turma: %.2lf\n", media_geral);

return 0;
}
