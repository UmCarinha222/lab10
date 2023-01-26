#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;
    printf("Insira o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Insira o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    double** matriz = (double**)malloc(linhas * sizeof(double*)); // alocando espaço para as linhas
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (double*)malloc(colunas * sizeof(double)); // alocando espaço para as colunas
    }

    // inicializando valores da matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Insira o valor para [%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }

    // imprimindo matriz
    printf("Matriz: \n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    // liberando memória alocada
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
