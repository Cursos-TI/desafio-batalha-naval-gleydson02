#include <stdio.h>


#define TAMANHO 10
#define NAVIO_TAMANHO 3
#define AGUA 0
#define NAVIO 3

void imprimirTabuleiro (int tabuleiro [TAMANHO][TAMANHO]){

    printf("\n     ");
    for (int col = 0; col < TAMANHO; col++)
    {
        printf("%c", 'A' + col);
    }
    printf("\n");

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%-3d", i);
        for (int j = 0; j < TAMANHO; j++)
        {
           if (tabuleiro [i][j] == NAVIO){
                printf("x ");
            } else {
                printf("~ ");
            }
        }
        printf("\n");
    }
    
    
}

int main() {

    int tabuleiro [TAMANHO][TAMANHO] = {0};

    int linhaH, linhaV;
    char letraColunaH, letraColunaV;
    int colunaH, colunaV;

    printf("=== TABULEIRO BATALHA NAVAL ===\n");
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
// Imprime o tabuleiro final
imprimirTabuleiro(tabuleiro);
    return 0;
}

