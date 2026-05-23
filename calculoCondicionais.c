/*
Crie um programa que leia três números inteiros e exiba qual é o maior, o do meio e o menor.

Leia três números: A, B e C
Exiba o maior, o intermediário e o menor
Trate o caso em que dois ou três números são iguais
💡 Dicas

Use if/else if/else aninhados

Pense em todos os casos possíveis antes de codificar

Teste com: (3,1,2), (5,5,3), (2,2,2)


*/ 

#include <stdio.h>

int main(){

int numero1;
int numero2;
int numero3;

printf("Digite três número: ");
scanf("%d %d %d", &numero1 , &numero2 , &numero3);

if(numero1 > numero2 && numero1 > numero3){
    printf("Maior número %d", numero1);
}else if( numero2 > numero3){
printf("Intermediario %d", numero2);
}else{
    printf("Menor número %d", numero3);
}





return 0;
}