// Elabore um programa que faça a leitura de vários números inteiros até que se digite
// um número negativo. O programa tem de retornar o maior e o menor número lido

#include <stdio.h>

int main() {
    int numero, maior, menor;
    printf("Digite um número inteiro caso deseje sair digite um número negativo: ");
    scanf("%d", &numero);
    maior = menor = numero;

    while (numero >= 0) {
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
        printf("Digite outro número inteiro caso deseje sair digite um número negativo: ");
        scanf("%d", &numero);
    }

    printf("O maior número lido foi: %d\n", maior);
    printf("O menor número lido foi: %d\n", menor);

    return 0;
}