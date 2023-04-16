#include <stdio.h>
#include <math.h>

int main(){
    float x1,y1,x2,y2, resultado;
    printf("Digite o primeiro valor do eixo X \n");
    scanf("%f", &x1);
    printf("Digite o segundo valor do eixo Y \n");
    scanf("%f", &y1);
    printf("Digite o segundo valor do eixo X \n");
    scanf("%f", &x2);
    printf("Digite o segundo valor do eixo Y \n");
    scanf("%f", &y2);

    resultado = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia eh de %.4f", resultado);

    return 0;
}