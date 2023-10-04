#include <stdio.h>
#include <stdlib.h>

main () {
    char nome [50];
    int idade;
    char matricula [30];
    char endereco [50];
    char curso [40];
    char periodo [90];
    char disciplina [100];
    float mensalidade;

printf("~~~~~~~~~~~~~~~~| |~~~~~~~~~~~~~~~~~");

// NOME
printf("\nDigite seu nome: ");
fgets(nome, 50, stdin);
fflush(stdin);

// IDADE
printf("Digite sua idade: ");
scanf("%d", &idade);
fflush(stdin);

// MATRICULA
printf("Digite sua matricula: ");
fgets(matricula, 30, stdin);
fflush(stdin);

// ENDERECO
printf("Digite seu endereco: ");
fgets(endereco, 50, stdin);
fflush(stdin);

// CURSO
printf("Digite o curso: ");
fgets(curso, 40, stdin);
fflush(stdin);

// PERIODO
printf("Digite o periodo do curso: ");
scanf("%s", &periodo);
fflush(stdin); 

// DISCIPLINAS
printf("Digite a disciplina: ");
fgets(disciplina, 100, stdin);
fflush(stdin); 

// MENSALIDADE
printf("Digite a mensalidade: ");
scanf("%f", &mensalidade);
fflush(stdin); 

// CADASTRO
printf("----------CADASTRO DO ALUNO----------");
printf("\nNOME: %s", nome);
printf("\nIDADE: %d", idade);
printf("\nMATRICULA: %s", matricula);
printf("\nENDERECO: %s", endereco);
printf("\nCURSO: %s", curso);
printf("\nPERIODO: %s", periodo);
printf("\nDISCIPLINA: %s", disciplina);
printf("\nMENSALIDADE: %.2f", mensalidade);

}