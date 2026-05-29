/*
Crie um jogo onde o programa escolhe um número secreto e o usuário tenta adivinhar com dicas.

Defina o número secreto no código: int secreto = 42
O usuário chuta um número
O programa diz: "Muito alto!", "Muito baixo!" ou "Acertou!"
O loop continua até acertar
Extra: conte quantas tentativas foram necessárias
💡 Dicas

Use while(chute != secreto) para repetir

Crie um contador de tentativas: tentativas++

while
contador
if/else

*/ 

#include<stdio.h>

int main(){
    
  int secreto = 42;
  int chute; 
  int contador = 0;
  
    
    
    
    while(chute != secreto){
       printf("Chute um número até acertar: \n");
            scanf("%d",&chute); 
    }if(chute == secreto){
        printf("Acertouu!!");
    }else if(chute > secreto){
        printf("Numero muito alto, tente novamente!!");
    }else{ 
        
    printf("Numero muito baixo, tente novamente!!");
    
    printf("Total de tentativas: %d\n", contador);
    }
    
    return 0;


}
