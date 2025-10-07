#include <stdio.h>
#include <stdlib.h>

#define FILAS 3
#define COLUMNAS 4

void genMatriz(int matriz[FILAS][COLUMNAS]){
    int contador = 1;
    int i,j;
    for(i = 0; i < FILAS; i++){
        for(j = 0; j < COLUMNAS; j++){
            matriz[i][j] = contador++;
        }
    }
}

void calcular_trans(int matriz[FILAS][COLUMNAS], int transpuesta[COLUMNAS][FILAS]){
    int i, j;
    
    for(i = 0; i < FILAS; i++){
        for(j = 0; j < COLUMNAS; j++){
            transpuesta [j][i] = matriz[i][j];
        }
    }
}

void impresion_matriz(int matriz[][COLUMNAS],int filas, int columnas){
    
    
    for(int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
    
}

void impresion_trans(int matriz[][FILAS],int filas, int columnas){
    
    
    for(int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
    return;
}

int main (){

    int matrizA[FILAS][COLUMNAS];
    int matrizAT[COLUMNAS][FILAS];

    printf("Calculando matriz A (%dx%d): \n",FILAS, COLUMNAS);
    genMatriz(matrizA);

    printf("calculando matriz Transpuesta (%dx%d): \n",COLUMNAS, FILAS);
    calcular_trans(matrizA,matrizAT);
    
    printf("\nMatriz A: \n");
    impresion_matriz(matrizA, FILAS, COLUMNAS);

    printf("\n Matriz transpuesta: \n");
    impresion_trans(matrizAT, COLUMNAS, FILAS);

    
    return 0;
}