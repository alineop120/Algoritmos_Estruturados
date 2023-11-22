#include <stdio.h>    //potencia e modulo
#include <math.h>

main () {
    int num1, num2, potencia, modulo;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

        // POTENCIA
    /*potencia = (num1 ^ num2);*/
    potencia = pow (num1, num2);

    printf("Resultado potencia: %d", potencia);

        // MODULO
    modulo = num1 % num2;

    printf("\nResultado modulo: %d", modulo);

}