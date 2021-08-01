/*
  Estudo de como um tabuleiro de xadrez pode ser mostrado na tela a partir de uma matriz
  inicializada com caracteres personalizados e traduzidos para caracteres semi-gr�ficos
  para serem mostrados na tela
*/
#include <stdio.h>

// Constante simb�lica definidas para o c�digo ASCII do caractere espa�o em branco
#define VAZIO 32                    // Epa�o em branco - c�digo interno 0

// Constantes simb�licas definidas para os c�digos ASCII dos caracteres
// semi-gr�ficos de linha duplas
#define CANTO_SUP_ESQ 201           // Canto superior esquerdo - c�digo interno 1
#define CANTO_SUP_DIR 187           // Canto superior direito - c�digo interno 2
#define CANTO_INF_ESQ 200           // Canto inferior esquerdo - c�digo interno 3
#define CANTO_INF_DIR 188           // Canto inferior direito - c�digo interno 4
#define CRUZAMENTO 206              // Cruzamento de linhas - c�digo interno 5
#define LINHA_HORIZONTAL 205        // Linha dupla horizontal - c�digo interno 6
#define LINHA_VERTICAL 186          // Linha dupla vertical - c�digo interno 7
#define DERIVACAO_PARA_DIREITA 204  // Deriva��o de linha para a direita - c�digo interno 8
#define DERIVACAO_PARA_ESQUERDA 185 // Deriva��o de linha para a esquerda - c�digo interno 9
#define DERIVACAO_PARA_BAIXO 203    // Deriva��o de linha para baixo - c�digo interno 10
#define DERIVACAO_PARA_CIMA 202     // Deriva��o de linha para cima - c�digo interno 11

#define DIMENSAO 17

int mapeia_caractere(int);
void mostra_tabuleiro(int[][17]);

int main() {
    // Matriz que representa o tabuleiro, inicializada com os c�digos internos dos caracteres
    // cada elemento possui o c�digo interno do caractere a ser mostrado
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

// Fun��o que desenha o tabuleiro na tela a partir dos c�digos internos
// armazenados na matriz que representa o tabuleiro
void mostra_tabuleiro(int tabuleiro[][17]) {

    for (int lin = 0; lin <= 16; ++lin) {
        for (int col = 0; col <= 16; ++col) {
            if (tabuleiro[lin][col] == 6 || tabuleiro[lin][col] == 0)
                // Repete a impress�o do caractere linha horizontal ou espa�o em branco
                for (int vezes = 1; vezes <= 3; ++vezes)
                    printf("%c", mapeia_caractere(tabuleiro[lin][col]));
            else
                printf("%c", mapeia_caractere(tabuleiro[lin][col]));
        }
        printf("\n");
    }
    return;
}

// Fun��o que traduz o c�digo interno da matriz para o c�digo ASCII do caractere correspondente
// recebe um c�digo interno e retorna o c�dogo ASCII correspondente
int mapeia_caractere(int codigo_interno) {
    int codigo_ascii[] = {VAZIO, CANTO_SUP_ESQ, CANTO_SUP_DIR, CANTO_INF_ESQ,
                          CANTO_INF_DIR, CRUZAMENTO, LINHA_HORIZONTAL, LINHA_VERTICAL,
                          DERIVACAO_PARA_DIREITA, DERIVACAO_PARA_ESQUERDA,
                          DERIVACAO_PARA_BAIXO, DERIVACAO_PARA_CIMA};

    return codigo_ascii[codigo_interno]; // Retorna o elemento do array
                                         // O c�digo interno � o �ndice elemento do array
}
