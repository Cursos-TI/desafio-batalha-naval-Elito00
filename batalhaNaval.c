#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3
#define VALOR_AGUA 0
#define VALOR_NAVIO 3

int main() {
    int tabuleiro[TAM][TAM] = {0};

    // -------------------- NAVIO HORIZONTAL --------------------
    int linha_horizontal = 2, coluna_horizontal = 3;
    printf("Navio Horizontal:\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        int linha = linha_horizontal;
        int coluna = coluna_horizontal + i;

        if (coluna < TAM) {
            tabuleiro[linha][coluna] = VALOR_NAVIO;
            printf("Parte %d -> (%d, %d)\n", i + 1, linha, coluna);
        }
    }

    // -------------------- NAVIO VERTICAL --------------------
    int linha_vertical = 5, coluna_vertical = 7;
    printf("\nNavio Vertical:\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        int linha = linha_vertical + i;
        int coluna = coluna_vertical;

        if (linha < TAM) {
            tabuleiro[linha][coluna] = VALOR_NAVIO;
            printf("Parte %d -> (%d, %d)\n", i + 1, linha, coluna);
        }
    }

    // -------------------- NAVIO DIAGONAL PRINCIPAL ↘️ --------------------
    int linha_diag1 = 0, coluna_diag1 = 0;
    printf("\nNavio Diagonal Principal:\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        int linha = linha_diag1 + i;
        int coluna = coluna_diag1 + i;

        if (linha < TAM && coluna < TAM) {
            tabuleiro[linha][coluna] = VALOR_NAVIO;
            printf("Parte %d -> (%d, %d)\n", i + 1, linha, coluna);
        }
    }

    // -------------------- NAVIO DIAGONAL SECUNDÁRIA ↙️ --------------------
    int linha_diag2 = 0, coluna_diag2 = 9;
    printf("\nNavio Diagonal Secundária:\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        int linha = linha_diag2 + i;
        int coluna = coluna_diag2 - i;

        if (linha < TAM && coluna >= 0) {
            tabuleiro[linha][coluna] = VALOR_NAVIO;
            printf("Parte %d -> (%d, %d)\n", i + 1, linha, coluna);
        }
    }

    // -------------------- EXIBIÇÃO FINAL DO TABULEIRO --------------------
    printf("\nTabuleiro Final:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}


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


