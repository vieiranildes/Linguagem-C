/*
Crie um programa que leia as medidas de uma figura e calcule sua área.

Exiba um menu: 1-Círculo, 2-Retângulo, 3-Triângulo
Leia a opção e os dados necessários
Calcule e exiba a área correspondente
💡 Dicas

Use #define PI 3.14159 para a constante PI

Círculo: PI * r * r

Retângulo: base * altura

Triângulo: (base * altura) / 2


*/ 

#include <stdio.h>
#define PI 3.14159

int main(){

    int opcao;
    float resultado, base = 0, altura = 0, raio = 0;

printf("\nQual o cálculo?");
printf("\nEscolha uma das oções abaixo:");
printf("\n1 - Círculo, 2 - Retângulo, 3 - Triângulo: ");
scanf("%d", &opcao);

if(opcao == 1){
    printf("Qual o valor do raio?");

resultado = PI * raio * raio;
    printf("A área é de: %.2f", resultado);

}else if( opcao == 2){
    printf("Valor da base: ");
    scanf("%f", &base);
    printf("Valor da altura: ");
    scanf("%f", &altura);

    resultado = (base * altura);

    
printf("A área é de: %.2f", resultado);

}else if( opcao == 3){

    printf("Valor da base: ");
    scanf("%f", &base);
    printf("Valor da altura: ");
    scanf("%f", &altura);

    printf("Qual o valor do triangulo?");

    resultado =  (base * altura) / 2;

    printf("A área é de: %.2f", resultado);

}



    return 0;
}