/*
    2.	Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está empenhado em elaborar uma análise sobre o recebimento de salário regular através do registro em carteira profissional dos funcionários no país. Assim, elabore um algoritmo que obtenha, para cada assalariado, com carteira profissional assinada, o seu sexo M(masculino) e F(feminino) e o valor de seu salário, devendo este salário ser maior que um real (R$1,00). Seu algoritmo deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo do salário mínimo. Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura dos dados de cada assalariado cadastrado pelo ministério deverá ser apresentado o seu salário em reais, a classificação por extenso em relação ao salário mínimo e o sexo por extenso (Masculino ou Feminino).
    A classificação em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo classificaSalario e os resultados solicitados para cada assalariado deverão ser apresentados pelo sub-algoritmo denominado mostraClassifica. 
    Você deverá fazer a entrada de dados para todos os assalariados que foram pesquisados pelo ministério, lembrando de fazer sempre a validação de todos os dados informados em sub-algoritmos específicos.   
    Na solução deste problema os resultados finais de cada assalariado que participou desta pesquisa deverão ser apresentados.
    Após a leitura dos dados de todos os assalariados pesquisados o seu algoritmo deverá apresentar a quantidade de assalariados com salário abaixo do salário mínimo e a quantidade assalariados com salário acima do salário mínimo
*/
#include <stdio.h>

void classificaSalario(float salario, float salario_minimo) {
    if (salario < salario_minimo) {
        printf("Abaixo do salário mínimo\n");
    } else if (salario > salario_minimo) {
        printf("Acima do salário mínimo\n");
    } else {
        printf("Igual ao salário mínimo\n");
    }
}

void mostraClassifica(char sexo, float salario, float salario_minimo) {
    printf("Salário: R$ %.2f\n", salario);
    printf("Classificação em relação ao salário mínimo: ");
    classificaSalario(salario, salario_minimo);
    printf("Sexo: %s\n", sexo == 'M' ? "Masculino" : "Feminino");
}

int validaSexo() {
    char sexo;
    do {
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
        if (sexo != 'M' && sexo != 'F') {
            printf("O sexo deve ser M ou F.\n");
        }
    } while (sexo != 'M' && sexo != 'F');
    return sexo;
}

float validaSalario(float salario_minimo) {
    float salario;
    do {
        printf("Digite o salário: R$ ");
        scanf("%f", &salario);
        if (salario <= 1.0) {
            printf("O salário deve ser maior que R$ 1,00.\n");
        }
    } while (salario <= 1.0);
    return salario;
}

int main() {
    float salario_minimo = 1400.0;
    int abaixo = 0, acima = 0;
    while (1) {
        printf("Assalariado:\n");
        char sexo = validaSexo();
        float salario = validaSalario(salario_minimo);
        mostraClassifica(sexo, salario, salario_minimo);
        printf("\n");
        if (salario < salario_minimo) {
            abaixo++;
        } else if (salario > salario_minimo) {
            acima++;
        }
        printf("Assalariados abaixo do salário mínimo: %d\n", abaixo);
        printf("Assalariados acima do salário mínimo: %d\n", acima);
    }
    return 0;
}
