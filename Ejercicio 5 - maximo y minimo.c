#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  srand(time(NULL));  // Inicializar semilla
  
  int matriz[4][4];
  int i,j; 
  int maximo = matriz[0][0];
  int minimo = matriz[0][0];
  int fila_max = 0, columna_max = 0;
  int fila_min = 0, columna_min = 0;

  
    //matriz 4x4 que genera numeros aleatorios
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            
            int num = rand() % 100;  // Número aleatorio entre 1 y 50
            matriz[i][j] = num;
            
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
       //Funcion de para encontrar el maximo y el minimo, en las columnas y filas correspodientes
        for (i = 0; i < 4; i++){
            for (j = 0; j < 4; j++){
            
            if(matriz[i][j] > maximo){
                maximo = matriz[i][j];
                fila_max = i;
                columna_max = j;
                }
           if (matriz[i][j < minimo]){
               minimo = matriz[i][j];
               fila_min = i;
               columna_min = j;
                }
            }
         }

    printf("Valor MAXIMO: %d\n", maximo);
    printf("Posicion: fila %d, columna %d\n", fila_max + 1, columna_max + 1);
    printf("Valor MINIMO: %d\n", minimo);
    printf("Posicion: fila %d, columna %d\n", fila_min + 1, columna_min + 1);
}