/*
Crie um programa que leia uma nota (0 a 10) e exiba a classificação correspondente.

9 a 10 → Excelente
7 a 8 → Bom
5 a 6 → Regular
0 a 4 → Insuficiente
Fora de 0–10 → Nota inválida
💡 Dicas

Verifique a nota inválida primeiro, antes dos outros if

Use && para checar intervalo: nota >= 7 && nota <= 8

*/ 

#include<stdio.h>

int main(){

int nota;
int resultado;


printf("Digite de a nota do aluno 0 a 10: \n");
scanf("%d",&nota);

if(nota > 10){
printf("Nota Inválida");
}else if(nota >= 9 && nota <= 10){
    printf("Nota Excelente, parabéns");
}else if(nota >= 7 && nota <= 8){
    printf("Perfomance Boa, parabéns");
}else if(nota >= 5 && nota <= 6){
    printf("Nota Regular, estude mais");
}else if(nota >= 0 && nota <= 4){
    printf("Perfomance insuficiente, Se esforce mais");

}

    return 0;
}


