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