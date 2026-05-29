/*
Leia 6 números em um vetor e calcule estatísticas sobre eles.

Leia 6 valores com scanf dentro de um for
Calcule e exiba: soma, média, menor e maior valor
Exiba quais valores estão acima da média
💡 Dicas

Inicialize maior = vetor[0] e menor = vetor[0] antes do loop

Faça dois loops: um para leitura e cálculo, outro para exibir acima da média

float v[6]
for
min/max

*/ 

#include <stdio.h>

int main() {
    float numero[6];
    float soma = 0;
    float media;
    float maior, menor;

    // 1. Ler os valores e calcular a soma
    for(int i = 0; i < 6; i++) {
        printf("Digite o valor %d/6: ", i + 1);
        scanf("%f", &numero[i]);
        soma += numero[i];
    }

    // Calcular a media
    media = soma / 6;

    // 2. Inicializar menor e maior com o primeiro elemento
    maior = numero[0];
    menor = numero[0];

    // 3. Encontrar o menor e o maior valor
    for(int i = 1; i < 6; i++) {
        if(numero[i] > maior) {
            maior = numero[i];
        }
        if(numero[i] < menor) {
            menor = numero[i];
        }
    }

    // 4. Exibir as estatísticas gerais
    printf("\n--- Estatísticas ---\n");
    printf("Soma = %.2f\n", soma);
    printf("Média = %.2f\n", media);
    printf("Maior = %.2f\n", maior);
    printf("Menor = %.2f\n", menor);

    // 5. Exibir valores acima da média
    printf("\n--- Valores acima da média ---\n");
    for(int i = 0; i < 6; i++) {
        if(numero[i] > media) {
            printf("%.2f\n", numero[i]);
        }
    }

    return 0;
}   