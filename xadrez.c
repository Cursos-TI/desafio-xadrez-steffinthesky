#include <stdio.h>

void moverBispoRecursivo(int x, int y, int movimentos) {
    if (movimentos == 0) return;
    printf("Bispo move para: (%d, %d)\n", x + 1, y + 1);
    moverBispoRecursivo(x + 1, y + 1, movimentos - 1);
}

void moverTorreRecursivo(int x, int movimentos) {
    if (movimentos == 0) return;
    printf("Torre move para: (%d, 0)\n", x + 1);
    moverTorreRecursivo(x + 1, movimentos - 1);
}

void moverRainhaRecursivo(int x, int movimentos) {
    if (movimentos == 0) return;
    printf("Rainha move para: (%d, 0)\n", x - 1);
    moverRainhaRecursivo(x - 1, movimentos - 1);
}

int main() {
    const int bispoMovimentos = 5;
    const int torreMovimentos = 5;
    const int rainhaMovimentos = 8;

    printf("Movimentação do Bispo (5 casas na diagonal superior direita):\n");
    for (int i = 1, x = 0, y = 0; i <= bispoMovimentos; i++, x++, y++) {
        printf("Bispo move para: (%d, %d)\n", x, y);
    }

    printf("\nMovimentação da Torre (5 casas para a direita):\n");
    for (int i = 1, x = 0; i <= torreMovimentos; i++, x++) {
        printf("Torre move para: (%d, 0)\n", x);
    }

    printf("\nMovimentação da Rainha (8 casas para a esquerda):\n");
    for (int i = 1, x = 8; i <= rainhaMovimentos; i++, x--) {
        printf("Rainha move para: (%d, 0)\n", x);
    }

    const int movimentosL = 1;
    printf("\nMovimentação do Cavalo (em L - baixo e esquerda):\n");
    for (int i = 0; i < movimentosL; i++) {
        int x = 0, y = 0;
        for (int j = 0; j < 2; j++) {
            x += (j == 0) ? -1 : -2;
            y += (j == 0) ? -2 : -1;
            printf("Cavalo move para: (%d, %d)\n", x, y);
        }
    }

    printf("\nMovimentação do Bispo com Função Recursiva:\n");
    moverBispoRecursivo(0, 0, bispoMovimentos);

    printf("\nMovimentação da Torre com Função Recursiva:\n");
    moverTorreRecursivo(0, torreMovimentos);

    printf("\nMovimentação da Rainha com Função Recursiva:\n");
    moverRainhaRecursivo(8, rainhaMovimentos);

    printf("\nMovimentação do Cavalo com Loops Avançados:\n");
    int x = 0, y = 0;
    for (int i = 0; i < 2; i++) {
        x += (i == 0) ? 2 : 1;
        y += (i == 0) ? 1 : 2;
        if (x > 8 || y > 8) break;
        printf("Cavalo move para: (%d, %d)\n", x, y);
        if (x == 2 && y == 1) continue;
    }

    return 0;
}
