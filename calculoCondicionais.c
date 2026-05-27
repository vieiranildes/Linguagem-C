/*
Crie um programa que leia três números inteiros e exiba qual é o maior, o do meio e o menor.

Leia três números: A, B e C
Exiba o maior, o intermediário e o menor
Trate o caso em que dois ou três números são iguais
💡 Dicas

Use if/else if/else aninhados

Pense em todos os casos possíveis antes de codificar

Teste com: (3,1,2), (5,5,3), (2,2,2)


*/ 

#include <stdio.h>
#include <stdbool.h>

int main(){

    /*
    Entradas: Três números interiros
     */
    int numero[3];
    int copoVazio;
    bool trocar; 

    trocar = true;
    
    //criar a repetição para leitura do meu vetor com o for com a estrutura de 3 repetição
    for(int i = 0; i<3; i++){
       printf("Digite três numeros inteiros: \n");
       scanf("%d", &numero[i]);   
    }

    while(trocar == true){  //Pq??
        trocar = false;
        for( int i=0; i<3; i++){
            if(numero[i] < numero[i+1]){
                copoVazio = numero[i];
                numero[i] = numero[i +1];
                numero[i +1] = copoVazio;
                trocar = true;
            }
        }
    }
 
    for(int i = 0; i<3; i++){
       printf("%d \n", numero[i]);       
    }
    

  

    /*
    Resultado: Exibir maior, intermediario e menor valor em ordem decrescente
         */


    return 0;
}