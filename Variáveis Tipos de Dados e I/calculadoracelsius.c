/*
Crie um programa que leia uma temperatura em Celsius e converta para Fahrenheit e Kelvin.

Leia a temperatura em Celsius (float)
Calcule Fahrenheit: F = C × 1.8 + 32
Calcule Kelvin: K = C + 273.15
Exiba os três valores formatados

*/ 

#include <stdio.h>

int main(){

float celsius;
float fahrenheit;
float kelvin;

printf("Qual a temperatura em celsius: ");
scanf("%f", &celsius);

fahrenheit = celsius * 1.8 +32;
printf("\nValor de fahrenheit é %f: ", fahrenheit);

kelvin = celsius + 273.15;
printf("\nValor de Kelvin é %f: ", kelvin);

    return 0;

}