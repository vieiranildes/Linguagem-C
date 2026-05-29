/*
Leia um vetor com 5 elementos, exiba o original e depois exiba na ordem inversa.

Leia 5 inteiros para o vetor
Exiba os elementos na ordem original
Exiba os elementos na ordem inversa
Extra: inverta de verdade, trocando os elementos dentro do vetor
💡 Dicas

Para exibir invertido sem alterar: for(i = 4; i >= 0; i--)

Para inverter de verdade: troque v[0] com v[4], v[1] com v[3] usando uma variável auxiliar

int v[5]
for reverso
troca de valores




*/ 

#include<stdio.h>

int main()
{
    
    //Entrada: vetor com 5 numeros
    
    int vetor[5];
    int i;
    int invertido = 5;
    
    // Mostrar vetor com for
    
        for(int i=0; i < 5; i++){
            printf("\nDigite o número: %d/5: ", i+1);
            scanf("%d", &vetor[i]);
        }
        // ordem inversa
        for(i = 4; i >= 0; i--){
            printf("%d", vetor[i]);
        
        }
        
   // inverter de verdade
  
            printf("\nElementos apos inverter de verdade:\n");
        for (i = 0; i < 5; i++) {
            printf("%d ", vetor[i]);
         }
                 printf("\n");
    
    
    return 0;
}