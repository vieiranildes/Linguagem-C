#include <stdio.h>

int main(){
    float a, b, resultado;
    int opcao;
    
    printf("\nprimeiro número"); 
    scanf("%f", &a);
    
     printf("\nsegundo número"); 
    scanf("%f", &b);
    
    
    printf("---Menu");
    printf(" \n 1. Soma");
    printf(" \n 2. Subtração");
    printf(" \n 3. Multiplicação");
    printf(" \n 4. Divisão");
    
    scanf("%d", &opcao);

if(opcao == 1){
        resultado = a + b;
    }else if( opcao == 2){
        resultado = a - b;
    }else if(opcao == 3){
        resultado = a * b;
    }else{ resultado = a / b;
}
printf("Resultado Final:  %f ", resultado);

    

return 0;
}

