/*
Crie um programa que leia um ano e informe se ele é ou não bissexto.

Um ano é bissexto se for divisível por 4
Exceto anos centenários (divisíveis por 100)
A menos que também sejam divisíveis por 400
Exemplos: 2000 ✅ | 1900 ❌ | 2024 ✅
💡 Dicas

Use o operador módulo % para checar divisibilidade

Ex: ano % 4 == 0 verifica se é divisível por 4

Combine com && e ||

*/ 

#include <stdio.h>

int main(){

int ano; 

printf("Digite o ano: \n");
scanf("%d", &ano);

if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
    printf("Ano bissexto");
}else if(ano % 100 == 0){
    printf("Ano centenario");
}







    return 0;
}

