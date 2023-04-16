// Faça um programa que leia 10 inteiros e imprima sua média.

#include <stdio.h>

int main(){
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,soma,media;

    printf("Digite 10 numeros inteiros \n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);

    soma = n1 + n2 + n3 + n4 + n5 +n6 + n7 + n8 + n9 + n10;

    media = soma / 10;

    printf("A media dos numeros digitados eh: %d", media);

    return 0;
}