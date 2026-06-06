/*
Um programa interativo com menu no terminal que simula um editor de texto — o usuário escolhe em tempo real se quer executar,
 desfazer ou refazer ações.

🍔 Byte Burger Docs — Editor v1.0
1
Executar nova ação
usuário digita a ação
2
Ctrl+Z — Desfazer
pop histórico → lixeira
3
Ctrl+Y — Refazer
pop lixeira → histórico
4
Ver estado das pilhas
exibe as duas pilhas
0
Sair



*/ 






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

    int opcao;
    pilha lixeira;
    inicializar(&lixeira);
    pilha historico;
    inicializar(&historico);
    int valor;
    
    
        while(opcao != 0){
            printf("----Menu----");
            printf("\n1. Executar nova ação");
            printf("\n2. Desfazer");
            printf("\n3. Refazer");
            printf("\n4. Ver estado das pilhas");
            printf("\n0. Sair\n");

            printf("Digite uma opção: ");
            scanf("%d", &opcao);
            
            

            if(opcao == 1){
                printf("Executar nova ação\n");
                scanf("%d", &valor);
                push(&historico, valor);
                
                }
                else if(opcao == 2){
                    valor = pop(&historico);
                    push(&lixeira, valor);
                    }
                else if(opcao == 3){
                    valor = pop(&lixeira);
                    push(&historico, valor);
                }else if(opcao == 4){

                    for(int i = 0; i<0; i++){
                        printf("%d", historico.dados[i]);
                    }

                    for(int i = 0; i<0; i++){
                        printf("%d", lixeira.dados[i]);
                    }
                }  
    
    }
    return 0;


}