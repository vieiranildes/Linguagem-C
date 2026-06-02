#include<stdio.h>
#define Max 10


typedef struct{

    int dados [Max];   /* os elementis */
    int topo;  /* índice do topo*/

} pilha;    /* -1 = vazia*/

void inicializar(pilha *p){
    p->topo = -1;
}
int estaVazia(pilha *p){
    return p->topo == -1;
}
int estaCheia(pilha *p){
    return p->topo == Max -1;

}
void push(pilha *p, int valor){
    if(estaCheia(p)) return;
    p->dados[++p->topo] = valor;
}
int pop(pilha * p){
    if(estaVazia(p)) return -1;
    return p->dados[p->topo--];
}
int peek(pilha *p){
  if(estaVazia(p)) return -1;
  return p->dados[p->topo];  
}

int main(){

    /*uso:*/

    pilha p;
    inicializar(&p);
    push(&p, 10);
    push(&p, 20);
    push(&p, 45);
    printf("%d\n", pop(&p)); /* 20*/
   // printf("%d\n", peek(&p)); /O peek só ver, ele não retira nada na pilha
     pop(&p);
    printf("%d\n", pop(&p));

    return 0;
}