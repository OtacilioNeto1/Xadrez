#include <stdio.h>

int main() {
    // Definindo o número de casas a serem movidas para cada peça
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    // Para o cavalo:
    const int movimentos_para_baixo = 2;
    const int movimentos_para_esquerda = 1;

    int i, j; // variáveis para controle de repetição

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

    printf("\n");

    // 4) Movimento do Cavalo (loops aninhados: for + while)
    // Cavalo move 2 casas para baixo, depois 1 casa para esquerda (movimento em "L")
    // Usando loop for externo e loop while interno

    printf("Movimento do Cavalo (2 casas para baixo, 1 casa para esquerda):\n");

    // Loop for para as etapas do movimento: duas etapas para baixo e uma para esquerda
    // Como o movimento é dividido em duas partes, fazemos assim:
    for (i = 0; i < 2; i++) { // duas casas para baixo
        j = 0;
        while (j < 1) {  // só uma impressão por iteração do for
            printf("Baixo\n");
            j++;
        }
    }

    // Agora uma casa para esquerda, fora do loop for, mas vamos usar while para cumprir o requisito
    j = 0;
    while (j < movimentos_para_esquerda) {
        printf("Esquerda\n");
        j++;
    }

    printf("\n");

    printf("Pressione Enter para sair...");
    getchar();

    return 0;
}
