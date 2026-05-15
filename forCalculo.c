#include <stdio.h>

int main()
{
 
float notas [5];
float soma;
float media;
float maiorNota = 0;


printf("Digite as cinco notas do aluno \n");
for(int i = 0; i<5; i++){
    scanf("%f", &notas[i]);
    soma = soma + notas[i];
    if(maiorNota < notas[i]){
        maiorNota = notas[i];
    }
}
media = soma/5;

for(int i = 0; i<5; i++){
printf("\nNota %d: %f", i, notas[i]);
}
printf("\nMédia é igual: %f", media);

if(media >= 6){
    printf("\nAprovado");
}else{
    printf("\nReprovado");
}

printf("\nMaior Nota é: %f", maiorNota);


  
    return 0;
}

