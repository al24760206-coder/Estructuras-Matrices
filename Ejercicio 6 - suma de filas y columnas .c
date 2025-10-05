#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//define 4 para el tamaño de las filas y columnas (4x4)
#define FILAS 4
#define COLUMNAS 4
int main(){

    srand(time(NULL));

    int matriz[FILAS][COLUMNAS];
    int sumaFilas[FILAS] = {0}; //varible para almacenar la suma de las filas definida en 0
    int sumaColumnas[COLUMNAS] = {0};// variable para almacenar la suma de columnas definida en 0
    int i, j;

    //matriz generada aleatoriamente con numeros de 1 a 50
    printf("\nMatriz generada aleatoriamente\n");
    for (i = 0; i <FILAS; i++){
        for (j = 0; j < COLUMNAS; j++){

            int num = rand() % 50;
            matriz [i][j] = num;

            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    //funcion de la suma de columnas y filas
    for (i = 0; i < FILAS; i++){
        for (j = 0; j < COLUMNAS; j++){

            sumaFilas[i] += matriz[i][j];
            sumaColumnas[j] += matriz [i][j];
        }
    }

    printf("\nSuma de las filas: \n");
    for (i = 0; i < FILAS; i++){
        printf ("Fila %d: %d\n", i + 1, sumaFilas[i]);
    }
    
    printf("\nSuma de las columnas: \n");
    for (j = 0; j < COLUMNAS; j++){
        printf ("Columna %d: %d\n", j + 1, sumaColumnas[j]);
    }

    return 0;
}