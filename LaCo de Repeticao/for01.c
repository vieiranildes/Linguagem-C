#include <stdio.h>

int main(){
int i;


for (i = 1; i <= 20; i++){
    
    if(i%2 == 0){
          
    printf("%d\n", i);
    
    }
    
}

int tabuada;
printf("Usuário ler tabuada\n");
scanf("%d", &tabuada);

for( int x = 0; x <=10; x++){
    int resultado = x * tabuada;
    printf("%d\n", resultado);
}


return 0; 

}    