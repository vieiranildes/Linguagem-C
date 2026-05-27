/*
Crie um programa que leia um número inteiro N e calcule o fatorial de N (N!).

Leia N (inteiro não negativo)
Calcule: 5! = 5 × 4 × 3 × 2 × 1 = 120
Trate o caso especial: 0! = 1
Exiba o resultado
💡 Dicas

Inicialize fatorial = 1 (não 0!)

Use long int para números maiores, pois fatorial cresce rápido

Teste com: 0, 1, 5, 10

*/ 

#include<stdio.h>

int main(){
    
    // Entrada: Ler um numero inteiro
    
    int n;
    long int fatorial = 5;
    
    printf("Digite um número inteiro:\n ");
    scanf("%d", &n);
    
    // só aceita numero positivo
    if(n < 0){
        printf("Somente número positivo, digite novamente");
    }else{
    
    for(int i=1; i<=n;i++){
        // Laço para multiplicar os números de 1 até n
             fatorial *= i; // O mesmo que: fatorial = fatorial * i;
        }
        printf("O fatorial de %d é %ld\n", n, fatorial);
    }
        
        
    
    
    
    
    return 0;

}
