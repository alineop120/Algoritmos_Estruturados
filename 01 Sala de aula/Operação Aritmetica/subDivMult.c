#include <stdio.h>

main () {      //subtracao, divisao, multiplicacao

    int num1, num2, sub, mult;
    float div;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;    //casting

    printf("Resultado subtracao: %d", sub);
    printf("\nResultado multiplicacao: %d", mult);
    printf("\nResultado divisao: %.2f", div);




}