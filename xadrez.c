#include <stdio.h>

// === Função recursiva para movimento da Torre ===
// Torre se move 5 casas para a direita.
// Parâmetros:
// - casasRestantes: quantas casas ainda faltam mover.
void moverTorreDireita(int casasRestantes) {
    if (casasRestantes <= 0) {
        return; // caso base: acabou o movimento
    }
    printf("Direita\n");
    moverTorreDireita(casasRestantes - 1); // chamada recursiva decrementando casas
}

// === Função recursiva para movimento do Bispo ===
// Bispo move-se 5 casas na diagonal para cima e para direita.
// Aqui, vamos usar loops aninhados dentro da recursão para simular vertical e horizontal.
// Parâmetros:
// - linhasRestantes: vertical (cima)
// - colunasRestantes: horizontal (direita)
void moverBispoDiagonal(int linhasRestantes, int colunasRestantes) {
    if (linhasRestantes <= 0 || colunasRestantes <= 0) {
        return; // caso base: acabou movimento
    }

    // Loop aninhado: loop externo para vertical (linhas)
    //               loop interno para horizontal (colunas)
    int i, j;
    for (i = 0; i < linhasRestantes; i++) {
        for (j = 0; j < colunasRestantes; j++) {
            // A cada casa na diagonal, imprimir "Cima, Direita"
            // Mas para simular recursividade, imprimimos só uma casa por chamada:
            printf("Cima, Direita\n");
            // Chamamos recursivamente para avançar uma casa diagonal
            moverBispoDiagonal(linhasRestantes - 1, colunasRestantes - 1);
            // Após a chamada recursiva, sai para evitar múltiplas impressões
            return;
        }
    }
}

// === Função recursiva para movimento da Rainha ===
// Rainha move-se 8 casas para a esquerda.
void moverRainhaEsquerda(int casasRestantes) {
    if (casasRestantes <= 0) {
        return; // caso base
    }
    printf("Esquerda\n");
    moverRainhaEsquerda(casasRestantes - 1);
}

// === Função para movimento do Cavalo com loops complexos ===
// Cavalo se move em "L": duas casas para cima, uma casa para a direita.
// Usaremos loops aninhados com múltiplas variáveis, controle com break e continue.
void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para cima, 1 casa para direita):\n");

    int movimentos_para_cima = 2;
    int movimentos_para_direita = 1;

    int i = 0, j = 0;

    while (1) {
        // Controle do loop externo e interno via múltiplas variáveis
        if (i >= movimentos_para_cima && j >= movimentos_para_direita) {
            // Sai do loop quando completou o movimento em L
            break;
        }

        // Mover para cima duas vezes
        if (i < movimentos_para_cima) {
            printf("Cima\n");
            i++;
            continue; // volta ao topo do while para a próxima casa para cima
        }

        // Depois mover para direita uma vez
        if (j < movimentos_para_direita) {
            printf("Direita\n");
            j++;
            continue;
        }
    }

    printf("\n");
}

int main() {
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    // Torre
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorreDireita(casas_torre);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    moverBispoDiagonal(casas_bispo, casas_bispo);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainhaEsquerda(casas_rainha);
    printf("\n");

    // Cavalo
    moverCavalo();

    // Pausa para evitar fechamento automático (caso rode no Windows)
    printf("Pressione Enter para sair...");
    getchar();

    return 0;
}
