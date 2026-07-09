#include<stdio.h>

// Retorna o indice ou -1 se não encontrar

int buscaLinear(int arr[], int tam, int alvo){

    for(int i =0; i<tam; i++){
        if(arr[i] == alvo)
        return i;  //encontrado!
    }

    return -1;    // não encontrado
}

int main(){

    int pedidos[] = {5,3,8,1,9,2};
    int alvo = 9, tam = 6;

    int pos = buscaLinear(
        pedidos, tam, alvo
    );

     printf("Pedido #9 %d", pos);
}