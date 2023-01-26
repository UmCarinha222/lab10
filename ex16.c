#include <stdio.h>

int main() {
    int N, M;
    printf("Insira o numero de linhas da matriz: ");
    scanf("%d", &N);
    printf("Insira o numero de colunas da matriz: ");
    scanf("%d", &M);

    int matriz[N][M];

    // Leitura da matriz
    printf("Insira os elementos da matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Criação da matriz transposta
    int matrizTransposta[M][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matrizTransposta[j][i] = matriz[i][j];
        }
    }

    // Impressão da matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Impressão da matriz transposta
    printf("Matriz transposta:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
