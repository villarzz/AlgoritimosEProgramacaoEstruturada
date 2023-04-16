// Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
// produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
// Apresente o resultado da seguinte forma:
// DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
// DIFERENCA = (“valor de DIFERENCA”)


#include <stdio.h>
#include <stdlib.h>

int main(){
    int A,B,C,D, resultado;
    printf("Digite o valor de A \n");
    scanf("%d", &A);
    printf("Digite o valor de B \n");
    scanf("%d", &B);
    printf("Digite o valor de C \n");
    scanf("%d", &C);
    printf("Digite o valor de D \n");
    scanf("%d", &D);

    printf("Valor de %d * valor de %d - valor de %d * valor de %d \n",A,B,C,D);
    
    resultado = (A * B - C * D);
    printf("O valor da diferenca eh: %d", resultado);

}