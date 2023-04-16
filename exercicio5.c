#include <stdio.h>
#include <math.h>

int main(){
    int numero, i;

    printf("Digite um numero positivo \n");
    scanf("%d", &numero);

    printf("Os divisores de %d são \n", numero);
    for(i = 1; i <= numero; i++){
        if(numero % i == 0){
            printf("%d ", i);
        }
    }

    return 0;
}