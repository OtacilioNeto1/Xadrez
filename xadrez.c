#include <stdio.h>

int main() {
    // Definindo o número de casas a serem movidas para cada peça
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    int i; // variável para controle de repetição

    // 1) Movimento da Torre (for)
    // Torre move-se para a direita (horizontal)
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // 2) Movimento do Bispo (while)
    // Bispo move-se na diagonal para cima e para a direita
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    i = 0;
    while (i < casas_bispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    // 3) Movimento da Rainha (do-while)
    // Rainha move-se para a esquerda
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casas_rainha);

    return 0;
}
