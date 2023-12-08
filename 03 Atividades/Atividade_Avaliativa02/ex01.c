/*
    1.	Em uma fábrica de peças, o salário base dos operários é de R$ 600,00. Além do salário base, cada operário recebe um adicional de produtividade baseado na quantidade de peças fabricadas por mês. Este adicional é pago de acordo com o seguinte critério:
        •	Se o número de peças for inferior ou igual a 50, não existe adicional de produtividade;
        •	Se o número de peças for superior a 50 e inferior ou igual a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50;
        •	Se o número de peças for superior a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50 até 80 e de R$ 0,75 por peça fabricada acima das 80.
    Elabore um algoritmo para solicitar de cada funcionário a quantidade de peças fabricadas naquele mês e apresentar o seu salário. Isto deve se repetir para todos os funcionários da empresa, onde o usuário não sabe, inicialmente, quantos funcionários existem nesta empresa, ou seja, o número de funcionários não será fornecido. 
    Sua solução proposta deverá possuir as lógicas bem definidas que sejam necessárias a implementação separada em sub-algoritmos específicos, devendo pelo menos os seguintes sub-algoritmos:
        a)	validaQuantidade que validará o número de peças fabricadas por cada funcionário;
        b)	calculaSalario que efetuará o cálculo do salário total para cada funcionário.
    O resultado final será mostrado ao usuário por meio de um procedimento (mostraFinal).
*/
#include <stdio.h>

float calculaSalario(int pecas) {
    float salario = 600.0;
    if (pecas > 50 && pecas <= 80) {
        salario += (pecas - 50) * 0.5;
    } else if (pecas > 80) {
        salario += 30 * 0.5 + (pecas - 80) * 0.75;
    }
    return salario;
}

int validaQuantidade() {
    int pecas;
    do {
        printf("Digite a quantidade de peças fabricadas: ");
        scanf("%d", &pecas);
        if (pecas < 0) {
            printf("A quantidade de peças deve ser um número positivo.\n");
        }
    } while (pecas < 0);
    return pecas;
}

void mostraFinal(float salario) {
    printf("O salário do funcionário é R$ %.2f.\n", salario);
}

int main() {
    int i = 1;
    while (1) {
        printf("Funcionário %d:\n", i);
        int pecas = validaQuantidade();
        float salario = calculaSalario(pecas);
        mostraFinal(salario);
        printf("\n");
        i++;
    }
    return 0;
}
