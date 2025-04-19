#include <stdio.h>
#include <stdlib.h>

#define TAM 10

// Função para exibir o tabuleiro de habilidade
void exibirMatriz(int matriz[TAM][TAM], const char* nome) {
    printf("\nHabilidade: %s\n", nome);
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Matrizes para cada habilidade
    int cone[TAM][TAM] = {0};
    int cruz[TAM][TAM] = {0};
    int octaedro[TAM][TAM] = {0};

    // Ponto de origem comum para todas (pode ser ajustado)
    int origemX = 5;
    int origemY = 5;

    // -------------------- HABILIDADE: CONE --------------------
    // Exemplo: cone triangular para "baixo"
    for (int i = 0; i < 3; i++) { // altura do cone
        for (int j = -i; j <= i; j++) {
            int x = origemX + i;
            int y = origemY + j;
            if (x >= 0 && x < TAM && y >= 0 && y < TAM) {
                cone[x][y] = 1;
            }
        }
    }

    // -------------------- HABILIDADE: CRUZ --------------------
    cruz[origemX][origemY] = 1;
    for (int i = 1; i <= 2; i++) {
        if (origemX + i < TAM) cruz[origemX + i][origemY] = 1;
        if (origemX - i >= 0) cruz[origemX - i][origemY] = 1;
        if (origemY + i < TAM) cruz[origemX][origemY + i] = 1;
        if (origemY - i >= 0) cruz[origemX][origemY - i] = 1;
    }

    // -------------------- HABILIDADE: OCTAEDRO --------------------
    for (int dx = -2; dx <= 2; dx++) {
        for (int dy = -2; dy <= 2; dy++) {
            if (abs(dx) + abs(dy) <= 2) { // forma de losango
                int x = origemX + dx;
                int y = origemY + dy;
                if (x >= 0 && x < TAM && y >= 0 && y < TAM) {
                    octaedro[x][y] = 1;
                }
            }
        }
    }

    // Exibe todas as matrizes com as áreas atingidas
    exibirMatriz(cone, "Cone");
    exibirMatriz(cruz, "Cruz");
    exibirMatriz(octaedro, "Octaedro");

    return 0;
}
