/*
    Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou  superior a 7.0 pontos. 
*/
#include <stdio.h>

int main () 
{
//  Variáveis
    float nota1, nota2, nota3, media_ponderada;

//  Nota das três provas
    printf("\nPrimeira prova: ");
    scanf("%f", &nota1);

    printf("Segunda prova: ");
    scanf("%f", &nota2);

    printf("Terceira prova: ");
    scanf("%f", &nota3);

//  Cálculo  da Média
    media_ponderada = (nota1 + nota2 + (nota3 *2) / 4);

//  Aluno APROVADO OU REPROVADO
    if (media_ponderada >= 7)
    {
        printf("\n\nMedia do Aluno: %.2f\n", media_ponderada);
        printf("ALUNO APROVADO");
    } 
    else 
    {
        printf("Media do Aluno: %.2f\n", media_ponderada);
        printf("ALUNO REPROVADO");
    }

return 0;
}
