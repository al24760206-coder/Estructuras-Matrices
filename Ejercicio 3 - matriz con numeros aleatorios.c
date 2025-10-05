

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  srand(time(NULL));  // Inicializar semilla
  
  int matriz[4][4];
  int pares =0 , impares = 0; //variable para contador de pares e impares
  int i,j;  
    //matriz 4x4 que genera numeros aleatorios
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            
            int num = rand() % 9 + 1;  // Número aleatorio entre 1 y 50
            matriz[i][j] = num;
        }
    }
    //funcion que despliega la matriz en la pantalla
    for (i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", matriz [i][j]);
        }
        printf("\n");//salto de linea para mejor visualizacion
    }
    //contador de pares e impares
    for (i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            
            if(matriz[i][j] % 2 == 0){
                pares++;
            }
            else{
                impares++;
            }
        }
    }
    
    printf("El total de numeros pares es: %d\n",pares);
    printf("El total de numeros impares es: %d\n",impares);
    
    return 0;
}