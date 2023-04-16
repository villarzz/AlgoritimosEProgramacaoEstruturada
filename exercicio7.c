#include <stdio.h>

int main() {
    int n, i, fib_i_2 = 0, fib_i_1 = 1, fib_i;

    printf("Digite um número maior ou igual a zero: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O termo N da sequência de Fibonacci é 0.\n");
    } else if (n == 1) {
        printf("O termo N da sequência de Fibonacci é 1.\n");
    } else {
        for (i = 2; i <= n; i++) {
            fib_i = fib_i_2 + fib_i_1;
            fib_i_2 = fib_i_1;
            fib_i_1 = fib_i;
        }
        printf("O termo N da sequência de Fibonacci é %d.\n", fib_i);
    }

    return 0;
}