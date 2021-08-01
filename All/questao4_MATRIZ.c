/*
  Estudo de como um tabuleiro de xadrez pode ser mostrado na tela a partir de uma matriz
  inicializada com caracteres personalizados e traduzidos para caracteres semi-gráficos
  para serem mostrados na tela
*/
#include <stdio.h>

// Constante simbólica definidas para o código ASCII do caractere espaço em branco
#define VAZIO 32                    // Epaço em branco - código interno 0

// Constantes simbólicas definidas para os códigos ASCII dos caracteres
// semi-gráficos de linha duplas
#define CANTO_SUP_ESQ 201           // Canto superior esquerdo - código interno 1
#define CANTO_SUP_DIR 187           // Canto superior direito - código interno 2
#define CANTO_INF_ESQ 200           // Canto inferior esquerdo - código interno 3
#define CANTO_INF_DIR 188           // Canto inferior direito - código interno 4
#define CRUZAMENTO 206              // Cruzamento de linhas - código interno 5
#define LINHA_HORIZONTAL 205        // Linha dupla horizontal - código interno 6
#define LINHA_VERTICAL 186          // Linha dupla vertical - código interno 7
#define DERIVACAO_PARA_DIREITA 204  // Derivação de linha para a direita - código interno 8
#define DERIVACAO_PARA_ESQUERDA 185 // Derivação de linha para a esquerda - código interno 9
#define DERIVACAO_PARA_BAIXO 203    // Derivação de linha para baixo - código interno 10
#define DERIVACAO_PARA_CIMA 202     // Derivação de linha para cima - código interno 11

#define DIMENSAO 17

int mapeia_caractere(int);
void mostra_tabuleiro(int[][17]);

int main() {
    // Matriz que representa o tabuleiro, inicializada com os códigos internos dos caracteres
    // cada elemento possui o código interno do caractere a ser mostrado
    int tabuleiro[DIMENSAO][DIMENSAO] = {{1, 6, 10, 6, 10, 6, 10, 6, 10, 6, 10, 6, 10, 6, 10, 6, 2},
                                         {7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7},
                                         {8, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 9},
                                         {7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7},
                                         {8, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 9},
                                         {7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7},
                                         {8, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 9},
                                         {7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7},
                                         {8, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 9},
                                         {7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7},
                                         {8, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 9},
                                         {7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7},
                                         {8, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 9},
                                         {7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7},
                                         {8, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 5, 6, 9},
                                         {7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7, 0, 7},
                                         {3, 6, 11, 6, 11, 6, 11, 6, 11, 6, 11, 6, 11, 6, 11, 6, 4}
                                        };

    mostra_tabuleiro(tabuleiro);
    return 0;
}

// Função que desenha o tabuleiro na tela a partir dos códigos internos
// armazenados na matriz que representa o tabuleiro
void mostra_tabuleiro(int tabuleiro[][17]) {

    for (int lin = 0; lin <= 16; ++lin) {
        for (int col = 0; col <= 16; ++col) {
            if (tabuleiro[lin][col] == 6 || tabuleiro[lin][col] == 0)
                // Repete a impressão do caractere linha horizontal ou espaço em branco
                for (int vezes = 1; vezes <= 3; ++vezes)
                    printf("%c", mapeia_caractere(tabuleiro[lin][col]));
            else
                printf("%c", mapeia_caractere(tabuleiro[lin][col]));
        }
        printf("\n");
    }
    return;
}

// Função que traduz o código interno da matriz para o código ASCII do caractere correspondente
// recebe um código interno e retorna o códogo ASCII correspondente
int mapeia_caractere(int codigo_interno) {
    int codigo_ascii[] = {VAZIO, CANTO_SUP_ESQ, CANTO_SUP_DIR, CANTO_INF_ESQ,
                          CANTO_INF_DIR, CRUZAMENTO, LINHA_HORIZONTAL, LINHA_VERTICAL,
                          DERIVACAO_PARA_DIREITA, DERIVACAO_PARA_ESQUERDA,
                          DERIVACAO_PARA_BAIXO, DERIVACAO_PARA_CIMA};

    return codigo_ascii[codigo_interno]; // Retorna o elemento do array
                                         // O código interno é o índice elemento do array
}
