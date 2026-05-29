/*
Leia uma matriz 4x4 e calcule a soma dos elementos da diagonal principal.

Leia uma matriz 4x4 de inteiros
Exiba a matriz completa
Destaque visualmente os elementos da diagonal
Exiba a soma da diagonal principal
Extra: calcule também a diagonal secundária
💡 Dicas

A diagonal principal é onde i == j

A diagonal secundária é onde i + j == n - 1 (n = tamanho)

Basta um for simples para percorrer a diagonal: soma += mat[i][i]

int m[4][4]
i == j
diagonal


*/ 

#include<stdio.h>

int main(){

    // Entrada: Matriz 4x4

   int matriz[4][4];
   int soma =0;
   int somaSecundaria = 0;
   int n = 4;     //tamanho da matriz

        printf("Digite o números da matriz 4x4\n");
        
    // Registro de valores da matriz 
        for(int i=0; i<4;i++){
           for(int j=0; j<4;j++){
            printf("Valores da matriz: [%d] [%d]: ", i , j );
                scanf("%d", &matriz[i][j]);
           } 
        }
    // Exibir  da matriz 
          for(int i=0; i<4;i++){
           for(int j=0; j<4;j++){
            printf("%d", matriz[i][j]);
           }  
           printf("\n");
           
     }
    // Exibir valores da diagonal
     printf("\n---Diagonal principal---\n");
        for(int i=0; i<4;i++){
            printf("%d",matriz[i][i]);
        }
    // Teste: com for soma os valores da matriz na diagonal

     printf("\n---Soma da Diagonal principal ---\n");
            for(int i=0; i<4;i++){
                soma += matriz[i][i];
                            
        printf("\nA soma da diagonal principal é: %d\n", soma);   


    // Teste: com for soma da diagonal segundaria

            printf("\n---Soma da Diagonal secundaria ---\n");
            
            somaSecundaria += matriz[i][n - 1 - i];



        printf("\nA soma da diagonal secundaria é: %d\n", somaSecundaria);   
            }  
    return 0;
}