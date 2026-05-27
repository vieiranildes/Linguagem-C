/*
Crie um programa que leia um número N e calcule a soma de todos os inteiros de 1 até N.

Leia N como inteiro positivo
Use for para somar 1 + 2 + 3 + ... + N
Exiba o resultado
Extra: exiba também a média dos valores
💡 Dicas

Crie uma variável soma = 0 antes do loop

Dentro do for, acumule: soma = soma + i ou soma += i

*/ 

#include<stdio.h>

int main(){
    
    // Entradas: um número inteiro positivo , media, soma
    
    int n;
    int soma = 0;
    int media;
    
    printf("Digite um numero inteiro\n");
    scanf("%d", &n);
    
    // Usar for para repetição de valores. I é igual a um e i é menor ou igual a n, conte i+1
    if (n > 0){
        for(int i=1; i<=n;i++){
        soma += i;
    }
    
    media = soma / n;
    
        printf("Soma de 1 ate %d: %d\n", n, soma);
        printf("Media dos valores: %.2d\n", media);
    } else {
        printf("Erro: O numero deve ser positivo!\n");
    }
    
    return 0;

}