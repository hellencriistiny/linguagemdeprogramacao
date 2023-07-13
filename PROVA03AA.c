#include <stdio.h>
#include <string.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100
#define MAX_PALAVRA 100

// Função para criar a matriz de tamanho MxN
void criarMatriz(int m, int n, char matriz[MAX_LINHAS][MAX_COLUNAS]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Informe o elemento da posicao (%d, %d): ", i + 1, j + 1);
            scanf("%s", matriz[i] + j);
        }
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int m, int n, char matriz[MAX_LINHAS][MAX_COLUNAS]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%s ", matriz[i] + j);
        }
        printf("\n");
    }
}

// Função para procurar uma palavra na matriz na direção horizontal
int procurarHorizontal(int m, int n, char matriz[MAX_LINHAS][MAX_COLUNAS], char palavra[MAX_PALAVRA]) {
    int i, j, count = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j <= n - strlen(palavra); j++) {
            if (strncmp(matriz[i] + j, palavra, strlen(palavra)) == 0) {
                count++;
            }
        }
    }
    return count;
}

// Função para procurar uma palavra na matriz na direção vertical
int procurarVertical(int m, int n, char matriz[MAX_LINHAS][MAX_COLUNAS], char palavra[MAX_PALAVRA]) {
    int i, j, count = 0;
    for (i = 0; i <= m - strlen(palavra); i++) {
        for (j = 0; j < n; j++) {
            if (strncmp(matriz[i] + j, palavra, strlen(palavra)) == 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int m, n;
    char matriz[MAX_LINHAS][MAX_COLUNAS];
    char palavra[MAX_PALAVRA];

    printf("Informe o numero de linhas da matriz: ");
    scanf("%d", &m);
    printf("Informe o numero de colunas da matriz: ");
    scanf("%d", &n);

    criarMatriz(m, n, matriz);

    // Imprimir a matriz
    printf("Matriz inserida pelo usuario:\n");
    imprimirMatriz(m, n, matriz);

    // Ler a palavra
    printf("Informe a palavra que deseja procurar: ");
    scanf("%s", palavra);

    // Procurar a palavra na matriz na direção horizontal
    int countHorizontal = procurarHorizontal(m, n, matriz, palavra);

    // Procurar a palavra na matriz na direção vertical
    int countVertical = procurarVertical(m, n, matriz, palavra);

    printf("A palavra '%s' aparece %d vezes na direcao horizontal e %d vezes na direcao vertical.\n", palavra, countHorizontal, countVertical);

    return 0;
}
