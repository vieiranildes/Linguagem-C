/*
Verificador de Palíndromo
Médio
Adapte a pilha para armazenar char e use-a para verificar se uma palavra digitada é um palíndromo (lê-se igual de frente e de trás).

Adapte o tipo da pilha para char elementos[MAX]
Leia uma palavra com scanf
Empilhe cada letra da palavra com push()
Desempilhe e compare letra a letra com a palavra original
Teste: "arara" ✅   "civic" ✅   "senai" ❌
💡 Dicas

Altere somente o tipo: char elementos[MAX] — as funções continuam iguais

Use strlen(palavra) para saber quantas letras empilhar

Comparação: if(pop(&p) != palavra[i]) → não é palíndromo

*/ 



#include<stdio.h>
#define Max 100

typedef struct{

int char elementos[Max];
int topo;
}pilha;

void inicializar(pilha * p){
    p->topo = -1;

}
int estaVazia(pilha * p){
    return p->topo == -1;
    
}
int estaCheia(pilha *p){
    return p->topo == Max-1;

}
void push(pilha *p, char letra){
    if(estaCheia(p)){
    printf("Plha cheia \n")
    }else{ 
        p->topo++;
         p->elementos[p->topo] = letra;
    }
        
   }
int pop(pilha * p){
    if(estaVazia(p))
        return -1;

    return p->dados[p->topo--];
}
int peek(pilha * p){
    if(estaVazia(p)) return -1;

    return p->dados[p->topo];
}


int main(){

    int soma = 0;
    int media;
    int valor;
    int vetorAuxiliar[Max];
    

    pilha p;
    inicializar(&p);
        for(int i=0; i<Max; i++){
            printf("Escreva 10 números %d/10: " , i + 1);
            scanf("%d", &valor);

            push(&p, valor);                
            
        }
         printf("Topo da Pilha %d\n", peek(&p));   // exibir

         for(int i=0; i<=Max; i++){
            printf("%d", p.dados[i]);
         }
         printf("\nInverso:");
        
        while(!estaVazia(&p)){

            printf("%d\n", pop(&p)); //desempilhar

            soma += valor;
            media = soma/10; 
           
            
            // colocar um vetor auxiliar para salvar e exibir de forma invertida 

                
        }





   return 0;
}
