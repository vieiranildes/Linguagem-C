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

#include<stdio.h>

int main(){
    
 int opcao;
 int valor;
 int resultado;
 
    
    while(opcao != 4){
        printf("---Menu");
        printf(" \n 1. Quadrado");
        printf(" \n 2. Par ou ímpar");
        printf(" \n 3. Potência");
        printf(" \n 4. Sair");
    ; 
        printf("\nEscolha uma opção: "); 
            scanf("%d", &opcao);
    
        
       
         
     }
   

    

   printf("Resultado %d", resultado);  
    return 0;
}
