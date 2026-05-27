/*
Crie um programa que leia o peso (kg) e a altura (m) de uma pessoa, calcule o IMC e exiba o resultado.

Leia peso e altura como float
Calcule: IMC = peso / (altura × altura)
Exiba o IMC com 2 casas decimais
Exiba a classificação: Abaixo do peso (<18.5), Normal (18.5–24.9), Sobrepeso (25–29.9), Obesidade (≥30)
💡 Dicas

Use %.2f para exibir 2 casas decimais

Lembre dos operadores relacionais: >= e <

Use float ou double para os cálculos

float
operadores
%.2f
03
Conversor de Temperatura
Básico
*/ 

#include <stdio.h>

int main(){

    float peso;
    float altura;

    printf("Digita seu peso: ");
    scanf("%f", &peso);


    printf("Qual a sua altura: ");
    scanf("%f", &altura);

   float imc = peso / (altura * altura);
   printf("\nO valor eh de: %.2f", imc);

   printf("\nInformativo sobre seu peso: Abaixo do peso (<18.5), Normal (18.5–24.9), Sobrepeso (25–29.9), Obesidade (≥30) ");
   






    return 0;

}