#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int* vetor = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor lido: [ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("]\n");

    free(vetor);
    return 0;
}
