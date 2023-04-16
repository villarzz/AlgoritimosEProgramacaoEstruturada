// Faça um programa que calcule e mostre a área da superfície e o volume de uma esfera
// sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R³. A
// fórmula para calcular a área é: 4 * pi * R². Considere (atribua) para pi o valor 3.14159. Use o
// conceito de constante Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas
// linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é
// outro inteiro

#include <stdio.h>
#include <math.h>

int main(){
    double raio, area, volume;
    double pi = 3.14159;

    printf("Digite o valor do raio \n");
    scanf("%lf", &raio);

    volume = (4.0/3.0) * pi *pow(raio, 3);
    area = 4 * pi * pow(raio,2);

    printf("O volume da esfera eh de %lf", volume);
    printf("A area da esfera eh de %lf", volume);

    return 0;
}