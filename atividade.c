/*
Crie um programa que leia o nome, idade e cidade do usuário e exiba uma mensagem de apresentação formatada.

Leia o nome completo com espaço
Leia a idade como inteiro
Leia a cidade como string
Exiba: "Olá! Meu nome é [nome], tenho [idade] anos e sou de [cidade]."
💡 Dicas

Use char nome[50] para strings

Para ler strings com espaço: scanf(" %[^\n]", nome)

Use %s para exibir strings no printf



*/ 

#include <stdio.h>

int main(){

char nome[50];
int idade;
char cidade[50];

printf("Qual seu nome: ");
scanf("%s", nome);

printf("\nQual sua idade: ");
scanf("%d", &idade);

printf("\nQual cidade você mora: ");
scanf("%s", cidade);

printf("Olá meu nome é %s tenho %d sou de %s", nome, idade, cidade);


    return 0; 
    
}                                                                               
