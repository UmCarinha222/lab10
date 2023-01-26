#include <stdio.h>
#include <stdlib.h>

// a) Vetor de 1024 bytes (1 Kbyte)
char* vetor_1024_bytes = (char*) malloc(1024 * sizeof(char));

// b) Matriz de inteiros de dimensão 10 × 10
int** matriz_10x10 = (int**) malloc(10 * sizeof(int*));
for (int i = 0; i < 10; i++) {
    matriz_10x10[i] = (int*) malloc(10 * sizeof(int));
}

// c) Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres), código do produto (inteiro) e preço em reais
struct Produto {
    char nome[30];
    int codigo;
    float preco;
} *vetor_produtos = (struct Produto*) malloc(50 * sizeof(struct Produto));

// d) Texto de até 100 linhas com até 80 caracteres em cada linha
char** texto = (char**) malloc(100 * sizeof(char*));
for (int i = 0; i < 100; i++) {
    texto[i] = (char*) malloc(80 * sizeof(char));
}
