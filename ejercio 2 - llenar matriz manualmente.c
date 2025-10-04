#include <stdio.h>

int main(){
//declaracion de la matriz
int matriz[4][4];

int i, j;
    
   //input para ingresar y guardar los valores de la matriz
   printf("Ingrese los valores de la matriz: \n");
    for(i = 0; i < 4; i++){
      
      for(j = 0; j < 4; j++){ 
        
        scanf("%d", &matriz [i][j]);
        
        }  
        
    }
    
    //funcion para mostrar la matriz
    for(i = 0; i < 4; i++){
      
      for(j = 0; j < 4; j++){ 
        
        printf("%3d", matriz[i][j]); 
    
        }  
      printf("\n"); 
        
    }
    



    return 0;
}