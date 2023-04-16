// Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
// apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
// deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
// de frutas. Ao final, apresente o valor total da compra.
// 1 => ABACAXI – 5,00 a unidade
// 2 => MAÇA – 1,00 a unidade
// 3 => PERA – 4,00 a unidade

#include <stdio.h>

int main() {
    int opcao, quantidade;
    float total = 0;

    printf("Menu de Frutas:\n");
    printf("1 - Abacaxi (R$ 5,00 a unidade)\n");
    printf("2 - Maçã (R$ 1,00 a unidade)\n");
    printf("3 - Pera (R$ 4,00 a unidade)\n");

    do {
        printf("Digite a opção desejada (0 para sair): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Total da compra: R$ %.2f\n", total);
                break;
            case 1:
                printf("Digite a quantidade de abacaxis: ");
                scanf("%d", &quantidade);
                total += 5 * quantidade;
                break;
            case 2:
                printf("Digite a quantidade de maçãs: ");
                scanf("%d", &quantidade);
                total += 1 * quantidade;
                break;
            case 3:
                printf("Digite a quantidade de peras: ");
                scanf("%d", &quantidade);
                total += 4 * quantidade;
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
