#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;
    double *vetor;

    printf("Quantos valores deseja armazenar no vetor? (tamanho >= 10)\n");
    scanf("%d", &n);
    if (n < 10) {
        printf("O tamanho do vetor deve ser maior ou igual a 10.\n");
        return 0;
    }

    vetor = (double *)malloc(n * sizeof(double));
    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        vetor[i] = (double)rand() / RAND_MAX * 100;
    }

    printf("Valores armazenados nos 10 primeiros elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", vetor[i]);
    }

    free(vetor);
    return 0;
}
