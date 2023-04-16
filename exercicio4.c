// Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas
// de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou
// se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem,
// escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou
// “Eixo Y”


#include <stdio.h>
#include <math.h>

int main(){
    float x, y;

    printf("Digite um valor para X \n");
    scanf("%f", &x);
    
    printf("Digite um valor para Y \n");
    scanf("%f", &y);

    if(x > 0 && y > 0){
        printf("O ponto esta no primeiro quadrante");
    }else if( x < 0 && y > 0 ){
        printf("O ponto esta no segundo quadrante");
    }else if( x < 0 && y < 0 ){
        printf("O ponto esta no terceiro quadrante");
    }else if(x > 0 && y < 0){
        printf("O ponto esta no quarto quadrante");
    }else if(x == 0){
        printf("O ponto esta sobre o eixo Y");
    }else if(y == 0){
        printf("O ponto esta sobre o eixo X");
    }else{
        printf("O ponto esta na origem");
    }

    return 0;
}