/*
    Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:
    
        Distância = (raiz -> (x2 - x1)^2 + (y2 - y1)^2
    
*/
#include <stdio.h>
#include <math.h>

int main() {
//  Variaveis
    double x1, y1, x2, y2;
    double distancia;

//  Processamento de Dados - Coordenadas do primeiro ponto
    printf("Digite as coordenadas do primeiro ponto (x1): ");
    scanf("%lf", &x1);
    printf("Digite as coordenadas do primeiro ponto (y1): ");
    scanf("%lf", &y1);

//  Processamento de Dados - Coordenadas do segundo ponto
    printf("Digite as coordenadas do segundo ponto (x2): ");
    scanf("%lf", &x2);
    printf("Digite as coordenadas do segundo ponto (y2): ");
    scanf("%lf", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

//  Saída de Dados    
    printf("A distância entre os pontos é %.4lf\n", distancia);

    return 0;
}
