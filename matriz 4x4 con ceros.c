/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
//declaracion de la matriz 4x4 de tipo entero, con los elementos en la matriz igual a 0
int matriz[4][4] = { {0,0,0,}, {0,0,0,}, {0,0,0,} };

int i, j;//variables que se usan para las filas y columnas de la matriz
    
    //ciclo for para i, para contar los elementos de las filas
    for(i = 0; i < 4; i++){
      
      // ciclo for para j, para contar las columnas
      for(j = 0; j < 4; j++){ // ciclo for para j, para contar las columnas
        
        //funcion printf para desplegar la matriz en pantalla   
        printf("%d", matriz[i][j]); 
    
        }  
      printf("\n"); //salto de linea para que sea mas vicible la matriz 4x4
        
    }
    




    return 0;
}