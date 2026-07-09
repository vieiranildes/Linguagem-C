#include <stdio.h> // Biblioteca para entrada e saída (printf)
#define N 15 // Define o tamanho do vetor como 15 elementos

// Vetor desordenado com 15 números
int lista[N] = {10, 7, 2, 1, 7, 6, 9, 8, 3, 4, 5, 2, 3, 4, 5};

// Variável que conta comparações feitas no algoritmo
int comp = 0;

// Variável que conta movimentações (trocas/deslocamentos)
int trocas = 0;

// Protótipo da função Shell Sort
void shellSort(int v[], int n);

int main() {
    int i; // Variável de controle dos loops
    printf("SHELL SORT\n\n"); // Título do programa
    printf("Lista original: "); // Texto antes da lista original

    // Imprime o vetor original
    for (i = 0; i < N; i++) {
        printf("%d ", lista[i]); // Mostra cada elemento do vetor
    }

    shellSort(lista, N); // Chama o algoritmo Shell Sort

    printf("\n\nLista ordenada: "); // Texto antes da lista ordenada

    // Imprime o vetor já ordenado
    for (i = 0; i < N; i++) {
        printf("%d ", lista[i]); // Mostra cada elemento ordenado
    }

    // Mostra número de comparações feitas
    printf("\n\nComparacoes: %d", comp);

    // Mostra número de trocas/movimentações feitas
    printf("\nTrocas (movimentacoes): %d\n", trocas);

    return 0; // Finaliza o programa corretamente
}

// Função que implementa o Shell Sort
void shellSort(int v[], int n) {
    int gap, i, j, temp; // gap = distância, i/j = índices, temp = valor temporário

    gap = 1; // Inicializa gap

    // Calcula o maior gap usando sequência de Knuth (3x + 1)
    while (gap < n) {
        gap = gap * 3 + 1;
    }

    // Reduz o gap até chegar em 1
    while (gap > 1) {

        gap = gap / 3; // Diminui o gap progressivamente

        // Percorre o vetor a partir do gap
        for (i = gap; i < n; i++) {

            temp = v[i]; // Guarda elemento atual
            j = i; // Define posição inicial de comparação

            comp++; // Conta uma comparação inicial

            // Faz inserção com gap (insertion sort generalizado)
            while (j >= gap && v[j - gap] > temp) {

                v[j] = v[j - gap]; // Move elemento maior para frente
                j -= gap; // Volta uma posição com base no gap

                comp++; // Conta comparação
                trocas++; // Conta movimentação
            }

            v[j] = temp; // Insere elemento na posição correta
            trocas++; // Conta inserção final
        }
    }
}
