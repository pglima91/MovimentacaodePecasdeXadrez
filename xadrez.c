#include <stdio.h>

int main() {
    // =======================================
    // Definição das quantidades de movimentos
    // =======================================
    const int movimentosTorre = 5;    // Torre: 5 casas para a direita
    const int movimentosBispo = 5;    // Bispo: 5 casas na diagonal cima-direita
    const int movimentosRainha = 8;   // Rainha: 8 casas para a esquerda

    const int movimentosCavaloVertical = 2; // Cavalo: 2 casas para baixo
    const int movimentosCavaloHorizontal = 1; // e 1 casa para a esquerda

    // ===============================
    // Movimento da Torre usando FOR
    // ===============================
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ===============================
    // Movimento do Bispo usando WHILE
    // ===============================
    printf("Movimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= movimentosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // ===================================
    // Movimento da Rainha usando DO-WHILE
    // ===================================
    printf("Movimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentosRainha);
    printf("\n");

    // ===================================
    // Movimento do Cavalo usando FOR + WHILE
    // ===================================
    printf("Movimento do Cavalo:\n");

    // O Cavalo faz dois movimentos para BAIXO e depois um movimento para a ESQUERDA.
    // Vamos usar um FOR para o movimento para baixo (2 vezes)
    // e um WHILE para o movimento para a esquerda (1 vez).

    for (int i = 1; i <= movimentosCavaloVertical; i++) {
        printf("Baixo\n");
    }

    // Após descer 2 vezes, faz uma vez para a esquerda
    int contadorHorizontal = 1;
    while (contadorHorizontal <= movimentosCavaloHorizontal) {
        printf("Esquerda\n");
        contadorHorizontal++;
    }

    printf("\n");

    return 0;
}
