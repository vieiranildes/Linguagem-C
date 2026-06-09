#include<stdio.h>
#define Max 10


typedef struct{

    int dados [Max];   /* os elementos */
    int inicio;  /* índice frente*/
    int fim;  //próximo espaço
    int tamanho;  //quant. elementos


} fila;   

void inicializar(fila *f){
    f->inicio = f->fim = f->tamanho = 0;
}
int estaVazia(fila *f){
    return f->tamanho == 0;
}
int estaCheia(fila *f){
    return f->tamanho == Max;

}
void enqueue(fila * f, int valor){  // fila esta cheia?
    if (estaCheia(f)) return;
    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % Max; // toda vez que chega no final, o fim passa a ser inicio.   fila circula
    f->tamanho++;
     
}  
int dequeue(fila * f){
    if (estaVazia(f)) return -1;   // checa se a fila esta vazia 
    int v = f->dados[f->inicio];  // valores fica salvo em dados, o valor que sera desinfeleira é no inicio
    f->inicio = (f->inicio + 1) % Max; // coloca o valor do inicio para frente, se o inicio é zero ele passa a ser 1
    f->tamanho--; // quando desfenfileira 1 o tamanho passa de 5 para 4
    return v;
}
int front(fila * f){
    if(estaVazia(f)) return -1;
    return f->dados[f->inicio];
}  

//uso
int main(){
 
    fila f; inicializar(&f);
    enqueue(&f, 101)     // enfileirar
    enqueue(&f, 102);
    enqueue(&f, 103);
    enqueue(&f, 104);
    printf ("%d\n", dequeue(&f));   // retira 
    printf ("%d\n", dequeue(&f));
    enqueue(&f, 105);     // acrescenta
    enqueue(&f, 106);
    

    while(!estaVazia(&f)){
     
    printf ("%d\n", dequeue(&f)); 


    }

    
return 0;

}