/*
    Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno e o segundo representando a sua altura em metros. Encontre o ai uno mais baixo e o mais alto. Mostre o número do aluno mais baixo e do mais alto, juntamente com suas alturas.
*/
#include <stdio.h>

int main() {
    int numero_mais_baixo = 0;
    int numero_mais_alto = 0;
    float altura_mais_baixa = 1000;
    float altura_mais_alta = 0;

    for (int i = 0; i < 10; i++) {
        int numero_aluno;
        float altura_aluno;
        printf("Digite o número do aluno: ");
        scanf("%d", &numero_aluno);
        printf("Digite a altura do aluno em metros: ");
        scanf("%f", &altura_aluno);
        if (altura_aluno > altura_mais_alta) {
            altura_mais_alta = altura_aluno;
            numero_mais_alto = numero_aluno;
        }
        if (altura_aluno < altura_mais_baixa) {
            altura_mais_baixa = altura_aluno;
            numero_mais_baixo = numero_aluno;
        }
    }

    printf("O aluno mais baixo é o número %d com %.2f metros.\n", numero_mais_baixo, altura_mais_baixa);
    printf("O aluno mais alto é o número %d com %.2f metros.\n", numero_mais_alto, altura_mais_alta);

    return 0;
}
