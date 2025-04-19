#include <stdio.h>

int main() {

    #define TAM 10
    #define TAM_NAVIO 3
    #define VALOR_AGUA 0
    #define VALOR_NAVIO 3
    
        // Declaração do tabuleiro e inicialização com água (0)
        int tabuleiro[TAM][TAM] = {0};
    
        // Coordenadas iniciais para os navios
        int linha_horizontal = 2, coluna_horizontal = 3;
        int linha_vertical = 5, coluna_vertical = 7;
    
        // Posiciona navio horizontalmente (mesma linha, colunas consecutivas)
        printf("Navio Horizontal:\n");
        for (int i = 0; i < TAM_NAVIO; i++) {
            int linha = linha_horizontal;
            int coluna = coluna_horizontal + i;
    
            // Verificação de limite
            if (coluna < TAM) {
                tabuleiro[linha][coluna] = VALOR_NAVIO;
                printf("Parte %d -> (%d, %d)\n", i + 1, linha, coluna);
            }
        }
    
        // Posiciona navio verticalmente (mesma coluna, linhas consecutivas)
        printf("\nNavio Vertical:\n");
        for (int i = 0; i < TAM_NAVIO; i++) {
            int linha = linha_vertical + i;
            int coluna = coluna_vertical;
    
            // Verificação de limite
            if (linha < TAM) {
                tabuleiro[linha][coluna] = VALOR_NAVIO;
                printf("Parte %d -> (%d, %d)\n", i + 1, linha, coluna);
            }
        }
    
        // Exibição final do tabuleiro (opcional, mas útil)
        printf("\nTabuleiro Final:\n");
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    
        return 0;
    }
    
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


