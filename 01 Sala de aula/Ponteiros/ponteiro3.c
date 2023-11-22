#include <stdio.h>

int main()
{
    int num1, num2, *pNum1, *pNum2;

    pNum1 = &num1;
    pNum2 = &num2;

    printf("Digite o valor de num1: ");
    scanf("%d", &num1);
    printf("Digite o valor de num2: ");
    scanf("%d", &num2);

    if(*pNum1 > *pNum2) 
    {
        printf("O primeiro e maior.");
    }
    else
    {
        printf("O segundo e maior.");
    }


    return 0;
}