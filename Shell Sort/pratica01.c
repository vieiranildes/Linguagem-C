#include <stdio.h>   // Inclui a biblioteca padrão de Entrada e Saída (usada para o printf).
#include <stdlib.h>  // Inclui a biblioteca padrão (necessária para as funções rand e srand).
#include <time.h>    // Inclui a biblioteca de tempo (usada para ler o relógio do sistema).

// Declaração da função Shell Sort, que recebe o vetor e o seu tamanho.
void shellSort(int vetor[], int tam){
    
    int gap, i, j, copia; // Declara as variáveis de controle do algoritmo.
    
    // O primeiro laço define o "gap" (salto), que começa com a metade do tamanho e vai caindo pela metade a cada rodada.
    for(gap = tam/2; gap > 0; gap /= 2){
        
        // Este laço percorre os elementos do vetor a partir da posição do "gap".
        for(i = gap; i < tam; i++){
            copia = vetor[i]; // Guarda o elemento atual em uma variável temporária.
            
            // Este laço faz as comparações e arrasta os elementos maiores para a direita, respeitando a distância do gap.
            for(j = i; j >= gap && vetor[j - gap] > copia; j -= gap) {
                vetor[j] = vetor[j - gap]; // Move o elemento maior para a posição atual.
            }
            
            vetor[j] = copia; // Coloca o elemento guardado na sua posição correta inserida.
        }
    }    
}

// Declaração da função que exibe os elementos do vetor na tela.
void imprimirVetor(int vet[], int tam){
    // Percorre o vetor da posição 0 até a última posição (tam - 1).
    for(int i = 0; i < tam; i++) {
        printf("%d ", vet[i]); // Imprime o número atual seguido de um espaço.
    }
    printf("\n"); // Quebra a linha no final da impressão do vetor.
}

// Declaração da função que gera números aleatórios para preencher o vetor.
void preencherVetor(int vet[], int tam){
    int i; // Declara a variável de controle do laço.
    // Percorre todo o vetor.
    for(i = 0; i < tam; i++) {
        vet[i] = rand() % 100; // Gera um número aleatório entre 0 e 99 e guarda na posição i.
    }
}

// Função principal, onde a execução do programa começa.
int main(){
    int tam = 6;     // Define uma variável com o tamanho do vetor (6 elementos).
    int vetor[tam];  // Cria o vetor de inteiros com o tamanho definido acima.
    
    srand(time(NULL)); // Alimenta o gerador de números aleatórios com a hora atual do sistema (evita números repetidos a cada execução).
    
    preencherVetor(vetor, tam); // Chama a função para preencher o vetor com números aleatórios.
    
    printf("Vetor original:\n"); // Imprime uma mensagem de texto na tela.
    imprimirVetor(vetor, tam);   // Chama a função para mostrar o vetor que acabou de ser gerado.
    
    shellSort(vetor, tam); // Chama a função Shell Sort para ordenar o vetor.
    
    printf("\nVetor Ordenado:\n"); // Imprime uma mensagem indicando o resultado.
    imprimirVetor(vetor, tam);     // Chama a função para mostrar o vetor agora ordenado.
    
    return 0; // Retorna 0 para o sistema operacional, indicando que o programa terminou com sucesso.
}