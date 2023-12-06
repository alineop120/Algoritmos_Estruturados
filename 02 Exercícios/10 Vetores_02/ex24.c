/*
    Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno e o segundo representando a sua altura em metros. Encontre o ai uno mais baixo e o mais alto. Mostre o número do aluno mais baixo e do mais alto, juntamente com suas alturas.
*/
#include <stdio.h>

int main() {
    // Inicialize as variáveis para armazenar o número e altura do aluno mais baixo e mais alto
    int aluno_mais_baixo, aluno_mais_alto;
    float altura_mais_baixa = __FLT_MAX__;  // Inicializado com FLT_MAX para garantir que qualquer altura seja menor
    float altura_mais_alta = 0;

    // Loop para ler os dados dos alunos
    for (int i = 1; i <= 10; ++i) {  // Itera sobre 10 conjuntos de valores
        int numero_aluno;
        float altura_aluno;

        printf("Digite o número do %dº aluno: ", i);
        scanf("%d", &numero_aluno);

        printf("Digite a altura do %dº aluno em metros: ", i);
        scanf("%f", &altura_aluno);

        // Verifica se é o aluno mais baixo
        if (altura_aluno < altura_mais_baixa) {
            aluno_mais_baixo = numero_aluno;
            altura_mais_baixa = altura_aluno;
        }

        // Verifica se é o aluno mais alto
        if (altura_aluno > altura_mais_alta) {
            aluno_mais_alto = numero_aluno;
            altura_mais_alta = altura_aluno;
        }
    }

    // Exibe os resultados
    printf("\nAluno mais baixo: Número %d, Altura: %.2f metros\n", aluno_mais_baixo, altura_mais_baixa);
    printf("Aluno mais alto: Número %d, Altura: %.2f metros\n", aluno_mais_alto, altura_mais_alta);

    return 0;
}