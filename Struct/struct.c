#include <stdio.h>

int main()
{
    // Entradas: variaveis que irão recever os valores
    
    // Definir tipo em tipedef struct
    typedef struct{
        
        char *nome;
        int mesa;
        float total;
        int pedido;
    }cliente;    //nome do tipo
    
    // variais desse tipo
    
        cliente c1;
        cliente c2;
        cliente fila[100];  //array de cliente
        
        // Atribuindo valores com ponto
        
        c1.nome = "Joao";
        c1.mesa = 5;
        c1.total = 39.90;
        c1.pedido = 103;
        
        //Lendo valores
        
        printf("Nome do cliente: %s\n", c1.nome);
        printf("Mesa: %d\n", c1.mesa);
        printf("Total R$ %.2f\n", c1.total);
        printf("Número do pedido: %d\n", c1.pedido);
        
        
        // Cada variavel tem seus valores
        
        c2.nome = "Paulo";
        c2.mesa = 8;
        c2.total = 22.50;
        c2.pedido = 105;
        
        printf("\nNome do cliente:  %s\n", c2.nome);
        printf("Mesa: %d\n", c2.mesa);
        printf("Total R$ %.2f\n", c2.total);
        printf("Número do pedido: %d\n", c2.pedido);
        
        
        
        
        
    
    return 0;
}


