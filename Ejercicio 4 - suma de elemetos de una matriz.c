#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  srand(time(NULL));  // Inicializar semilla
  
  int matriz[4][4];
  int i,j;  
  int suma = 0;
  float promedio = 0;
  
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
        //Operaciones de suma y promedio
        for (i = 0; i < 4; i++){
            for (j = 0; j < 4; j++){
                suma += matriz[i][j];
                promedio = (float)suma / 16;
            }
        
        }

    
    printf("La suma de los numeros es: %d\n", suma);
    printf("El promedio de los numeros es: %.2f\n", promedio);
}