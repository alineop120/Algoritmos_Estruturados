/*
    Faça um programa que leia um vetor de 5 posições para números reais e, depois, um código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem inversa Caso, o código for diferente de 1 e 2 escreva uma mensagem informando que o código é inválido.
*/
#include <stdio.h>

int main ()
{
    // Variáveis
    float vetor[5];
    char codigo;

    // Entrada de Dados - lê os números e escolher o código
    for (int cont = 0; cont < 5; cont++)
        {
        printf("Informe o numero: ");
        scanf("%f", &vetor[cont]);
        }
    printf("Digite o código");
    printf("(0 para sair, 1 para ordem direta, 2 para ordem inversa): ");
    scanf("%s", &codigo);

    // Processando os Dados
    switch (codigo)
    {
    case '0': // Finaliza o programa
        printf("Final do programa!");
        break;
    case '1': // Mostra o vetor na ordem direta
        for (int cont = 0; cont < 5; cont++) {
            printf("%.2f ", vetor[cont]);
        }
        break;
    case '2': // Mostra o vetor na ordem inversa
        for(int cont = 4; cont >= 0; cont--)
        {
            printf("\n%.2f", vetor[cont]);
        }
        break;
    }
return 0;
}
