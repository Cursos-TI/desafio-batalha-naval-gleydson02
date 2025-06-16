#include <stdio.h>

#define TAMANHO 5
#define AGUA 0
#define NAVIO 3

// Função para imprimir o tabuleiro
void imprimirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("Tabuleiro 5x5:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para exibir as coordenadas de um navio
void exibirCoordenadas(char nome[], int coordenadas[3][2]) {
    printf("Coordenadas do navio %s:\n", nome);
    for (int i = 0; i < 3; i++) {
        printf("Linha: %d, Coluna: %d\n", coordenadas[i][0], coordenadas[i][1]);
    }
    printf("\n");
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Coordenadas do navio horizontal (linha 2, colunas 0 a 2)
    int navioHorizontal[3][2] = {
        {2, 0},
        {2, 1},
        {2, 2}
    };

    // Coordenadas do navio vertical (coluna 4, linhas 0 a 2)
    int navioVertical[3][2] = {
        {0, 4},
        {1, 4},
        {2, 4}
    };

    // Posiciona o navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++) {
        int linha = navioHorizontal[i][0];
        int coluna = navioHorizontal[i][1];
        tabuleiro[linha][coluna] = NAVIO;
    }

    // Posiciona o navio vertical no tabuleiro
    for (int i = 0; i < 3; i++) {
        int linha = navioVertical[i][0];
        int coluna = navioVertical[i][1];
        tabuleiro[linha][coluna] = NAVIO;
    }

    // Exibe as coordenadas dos navios
    exibirCoordenadas("Horizontal", navioHorizontal);
    exibirCoordenadas("Vertical", navioVertical);

    // Exibe o tabuleiro final
    imprimirTabuleiro(tabuleiro);

    return 0;
}
