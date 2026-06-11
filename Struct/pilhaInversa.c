/*
EXibir em Ordem Inversa
Médio
Use a pilha para ler N números digitados pelo usuário e exibi-los na ordem inversa da digitação, explorando o comportamento LIFO.

Leia N do usuário (respeite o limite MAX da pilha)
Use for para ler e chamar push() em cada número
Use while(!estaVazia(&p)) para desempilhar e exibir
Exiba a sequência original e depois a invertida
Extra: calcule a soma e a média durante o desempilhamento
💡 Dicas

Guarde os valores em um vetor auxiliar para conseguir exibir a ordem original depois

O comportamento LIFO garante a inversão automaticamente — não precisa de lógica extra

Limite N: if(n > MAX) n = MAX;


*/ 




#include<stdio.h>
#define Max 10

typedef struct{

int dados[Max];
int topo;
}pilha;

void inicializar(pilha * p){
    p->topo = -1;

}int estaVazia(pilha * p){
    return p->topo == -1;
    
}int estaCheia(pilha * p){
    return p-> topo == Max -1;

}void push(pilha * p, int valor){
    if(estaCheia(p));
        return;

    p->dados[++p->topo] = valor;
}int pop(pilha * p){
    if(estaVazia(p));
        return -1;

    return p->dados[p->topo--];
}int peek(pilha * p){
    if(estaVazia(p)) return -1;

    return p-> dados[p-> topo];
}


int main(){

    int soma = 0;
    int media;
    int valor;


    pilha p;
    inicializar(&p);
        for(int i=0; i<Max; i++){
            printf("Escreva 10 números %d/10: " , i + 1);
            scanf("%d", &valor);

            push(&p, valor);                
            
        }

        while(!estaVazia(&p)){

            printf("%d\n", pop(&p));


            // colocar um vetor auxiliar para salvar e exibir de forma invertida 

            
                printf("%d\n", peek(&p));


        }





   return 0;
}





Use while(!estaVazia(&p)) para desempilhar e exibir
Exiba a sequência original e depois a invertida
Extra: calcule a soma e a média durante o desempilhamento
💡 Dicas

Guarde os valores em um vetor auxiliar para conseguir exibir a ordem original depois

O comportamento LIFO garante a inversão automaticamente — não precisa de lógica extra

Limite N: if(n > MAX) n = MAX;*/



 
