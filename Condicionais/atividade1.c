/*
Classificador de Triângulo
Médio
Leia três lados e determine se formam um triângulo válido e, se sim, qual o tipo.

Verifique se é triângulo válido: cada lado deve ser menor que a soma dos outros dois
Se válido: Equilátero (3 lados iguais), Isósceles (2 iguais) ou Escaleno (todos diferentes)
Se inválido: exibir mensagem de erro
💡 Dicas

Valide primeiro com &&: a+b>c && a+c>b && b+c>a

Use float para aceitar medidas decimais

*/ 

#include<stdio.h>

int main(){

   //Entrada: leitura de três dados 
   int a, b,c;
   int tringulo;
   int medio;

    printf("Digite três numeros inteiros: ");
    scanf("%d, %d , %d", &a,&b, &c);

    if(a+b>c && a+c>b && b+c>a){

   }






    return 0;
}


