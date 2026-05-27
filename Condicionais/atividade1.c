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
      float a, b,c;
   

    printf("Digite três lados do triangulo:\n ");
    printf("Lado 01:\n ");
    scanf("%d", &a);
    printf("Lado 02:\n ");
    scanf("%d", &b);
    printf("Lado 03: \n");
    scanf("%d", &c);


// Verificação se é um triângulo válido
    if(a+b>c && a+c>b && b+c>a){
            printf("Triangulo válido\n");
            
 // Classificação do triângulo  
       if(a==b && b==c){
            printf("Triangulo Valido: Equilatero (3 lados iguais)\n");
       }else if(b==a ||c==b || b==c){
            printf("Triangulo Valido: Isosceles (2 lados iguais)\n");
        } else {
            printf("Triangulo Valido: Escaleno (todos os lados diferentes)\n");
        }
    } else {
 // Mensagem de erro se não formar um triângulo
        printf("Erro: Os lados fornecidos nao formam um triangulo valido.\n");
    }

      

   

   return 0;
      
}