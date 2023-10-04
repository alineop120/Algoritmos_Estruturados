#include <stdio.h>
#include <math.h>

/*
    Calcule as raízes da equação de 2º grau
    A varável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não e equação de segundo grau”. 

        • Se ∆ < 0, não existe real. Imprima a mensagem: Não existe raiz. 

        • Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz  única.

        • Se ∆ ≥ 0, imprima as duas raízes reais. 
*/

int main () {
//  Variáveis
    float var_A, var_B, var_C, delta, raiz_um, raiz_dois, raiz_unica;

//  Entrada dos valores das raízes
    printf("Valor da variavel A: ");
    scanf("%f", &var_A);
    printf("Valor da variavel B: ");
    scanf("%f", &var_B);
    printf("Valor da variavel C: ");
    scanf("%f", &var_C);

    if (var_A == 0) {       
        printf("Nao e equacao de SEGUNDO GRAU.");
    } else {        
        delta = pow(var_B, 2) - 4 * var_A * var_C; 

        if (delta > 0) {                                    //Equação possui duas raízes reais.
        raiz_um = ( (-var_B + sqrt(delta)) / 2 * var_A );
        raiz_dois = ( (-var_B - sqrt(delta)) / 2 * var_A );
        printf("Primeira raiz: %.2f e Segunda raiz: %.2f", raiz_um, raiz_dois);

        } else if (delta == 0) {                             //Equação possui uma raiz real.
        raiz_unica = ( -var_B / 2 * var_A );
        printf("RAIZ UNICA: %f", raiz_unica);

        } else {                                             //Equação não possui raízes reais.
        printf("NAO EXISTE RAIZ REAL!");
        }
    }
    
    return 0;
}
