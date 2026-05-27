#include <stdio.h>

int main()
{
 
 int opcao;
 int valor;
 int resultado;
 
    
while(opcao != 0){
    printf("---Menu");
    printf(" \n 1. Dobro");
    printf(" \n 2. Quadrado");
    printf(" \n 3. Sair");
    ; 
       printf("\nEscolha uma opção: "); 
    scanf("%d", &opcao);
    
    printf("\nDigite um número: "); 
    scanf("%d", &valor);
    
    
    if(opcao == 1){
        resultado = (valor * 2);
     } else if(opcao == 2){
         resultado = (valor * valor);
     }else(opcao == 3);{
        
       }
         
     }
   

    

   printf("Resultado %d", resultado);  
    return 0;
}
