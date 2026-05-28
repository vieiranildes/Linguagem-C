#include<stdio.h>

int main(){
    // Entrada: ler 20 números
    
    int numeros[20];
    int i;
    int cont20_100 = 0;
    int cont101_200 = 0;
    int contMaior200 = 0;
    
    
    // Teste: criar leitura para os 20 numeros e utilizar  for para determinar a quantidade de números 
    
    for(int i=0; i<20;i++){
         printf("Digite o %dº número: ", i);
         scanf("%d", &numeros[i]);
    
         
         if(numeros[i] >=20 && numeros[i]<=100){
            cont20_100++;
        }else if(numeros[i] >=101 && numeros[i]<=200){
            cont101_200++;
        }else if(numeros[i] > 200){
            contMaior200++;
        }
        
    
}
    printf("\n--- Resultado ---\n");
    printf("Entre 20 e 100: %d\n", cont20_100);
    printf("Entre 101 e 200: %d\n", cont101_200);
    printf("Maiores que 200: %d\n", contMaior200);

         
    
    // Resultado: quantos estão entre 20 e 100  e 101  e 200. quantos são maiores que 200

    

       return 0;
}