/*
Crie um menu que se repete até o usuário escolher sair, realizando operações matemáticas.

1 — Calcular quadrado de um número
2 — Verificar se número é par ou ímpar
3 — Calcular potência (base ^ expoente)
4 — Sair
O menu deve reaparecer após cada operação
💡 Dicas

Use do { } while(opcao != 4) para garantir que o menu aparece ao menos uma vez

Para potência, use um for dentro do case

*/ 

#include <stdio.h>
#include <math.h> // Necessário para a função pow()

int main() {
    int opcao = 0;
    int valor = 0;
    int expoente = 0;
    double resultado = 0.0; // pow() retorna double

    while (opcao != 4) {
        printf("\n---Menu---\n");
        printf("1. Quadrado\n");
        printf("2. Par ou Ímpar\n");
        printf("3. Potência\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            printf("\nDigite um numero: ");
            scanf("%d", &valor);
        }

        if (opcao == 1) {
            resultado = (double)(valor * valor);
            printf("Resultado: %.0f\n", resultado);
        } 
        else if (opcao == 2) {
            if (valor % 2 == 0) {
                printf("O numero %d e PAR.\n", valor);
            } else {
                printf("O numero %d e ÍMPAR.\n", valor);
            }
        } 
        else if (opcao == 3) {
            printf("Digite um numero expoente: ");
            scanf("%d", &expoente);
            resultado = (valor ^ expoente); // Calcula a potência
            printf("Resultado: %.2f\n", resultado);
        } 
        else if (opcao == 4) {
            printf("Saindo do programa...\n");
        } 
        else {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}