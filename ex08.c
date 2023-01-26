#include <stdio.h>
#include <stdlib.h>

int main() {
    int* vetor;
    int tamanho = 1500, i;

    vetor = (int*) calloc(tamanho, sizeof(int));

    for (i = 0; i < tamanho; i++) {
        vetor[i] = i;
    }

    printf("Os 10 primeiros elementos do vetor são: \n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nOs 10 últimos elementos do vetor são: \n");
    for (i = tamanho - 10; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);
    return 0;
}
