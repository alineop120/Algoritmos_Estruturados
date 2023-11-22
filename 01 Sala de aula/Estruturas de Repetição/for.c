#include <stdio.h>

/*
                    Estrutura de repetição - for
    ___________________________________________________________________________________________________________________________
    • INICIALIZAÇÃO: Atribui um valor inicial à variável contadora.
    • TESTE: Verifica uma condição antes de decidir se executará o bloco de sentenças. Caso a condição seja falsa, interrompe as repetições.
    • EXECUÇÃO: Executa o bloco de sentenças.
    • ATUALIZAÇÃO: Atualiza a variável contadora para o próximo valor.
*/

int main () {
    int numero, res, num;
    //int contador;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int contador = 0; contador <= 10; contador++) {
        
        res = num * contador;
        printf("\n%d * %d = %d", num, contador, res);
        
        //printf("\n%d", contador);
    }

    return 0;
}