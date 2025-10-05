#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define FILAS 4
#define COLUMNAS 4

int main(){
    
    srand(time(NULL));

    int matrizA[FILAS][COLUMNAS];
    int matrizB[FILAS][COLUMNAS];
    int matrizC[FILAS][COLUMNAS];
    int i, j;

    //matriz generada aleatoriamente con numeros de 1 a 50
    printf("\nMatriz A aleatoriamente: \n");
    for (i = 0; i <FILAS; i++){
        for (j = 0; j < COLUMNAS; j++){

            int num = rand() % 50;
            matrizA [i][j] = num;

            printf("%d\t",matrizA[i][j]);
        }
        printf("\n");
    }
    
        printf("\nMatriz B aleatoriamente: \n");
    for (i = 0; i <FILAS; i++){
        for (j = 0; j < COLUMNAS; j++){

            int num = rand() % 50;
            matrizB [i][j] = num;

            printf("%d\t",matrizB[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz C (resultado): \n");
    for (i = 0; i <FILAS; i++){
        for (j = 0; j < COLUMNAS; j++){
            
            matrizC [i][j] = matrizA[i][j] - matrizB [i][j];
            printf("%d\t",matrizC[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}