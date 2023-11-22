#include <stdio.h>

int main () {
    //
    int valor;

    //
    printf("Digite o numero correspondente ao dia da semana:\n");
    scanf("%d", &valor);

    switch (valor) {
        //Possobilidade
        case 1:
            printf("\nDomingo");
            break;
        case 2:
            printf("\nSegunda");
            break;
        case 3:
            printf("\nTerca");
            break;
        case 4:
            printf("\nQuarta");
            break;
        case 5:
            printf("\nQuinta");
            break;
        case 6:
            printf("\nSexta");
            break;
        case 7:
            printf("\nSabado");
            break;
        default:
            printf("\nSem correspondencia.");
    }


    return 0;
}