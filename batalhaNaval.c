#include <stdio.h>

int main() {
    
    // Inicialização da Matriz
    int tabuleiro [10][10] = { // Tabuleiro composto por 10 colunas e 10 linhas
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 3, 0, 0, 0, 0}, // navio posicionado na diagonal
        {0, 0, 3, 0, 0, 0, 3, 0, 0, 0}, // navio posicionado na vertical
        {0, 0, 3, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 3, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 3, 3, 3, 0, 0}, // navio posicionado na horizontal
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0}, // segundo navio na diagonal
        {0, 0, 3, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 3, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

    // Exibição da Matriz
    printf("Tabuleiro de Batalha Naval\n");
    for (int i = 0; i < 10; i++) { // loop externo
        for (int j = 0; j < 10; j++) { // loop interno
            printf("%d ", tabuleiro[i][j]); // imprime a matriz
        }
        printf("\n"); // pula uma linha
    }

    return 0;
}
