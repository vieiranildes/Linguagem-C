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
    // Entrada: ler um número inteiro
    
    int numero;
    long long fatorial = 1;
    
    printf("Digite um número positivo: ");
    scanf("%d", & numero);
    
    
    // Verificar se é numero positivo
    
    if(numero < 0){
        printf("Numeros válidos somente positivo \n");
        
        
        // calcular o número exibido
    }else{
        
        for(int i=1; i<=numero;i++){
            fatorial *=i;
        }
        
        printf("O fatorial de %d é %lld\n", numero, fatorial);
    }
    
    // 
    
    

    

       return 0;
}
