#include <stdio.h>
#include <stdlib.h>

#define MATRIZSIDE 10

void datos_matriz (int matriz[MATRIZSIDE][MATRIZSIDE],int filas, int columnas){
    
    
    
    printf("\nIngrese los elementos de la matriz: \n", filas, columnas);

    for(int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("datos de la matriz [%d][%d]: ", i, j);
            scanf("%d",&matriz[i][j]);
        }
    }
    return;
}

void impresion_matriz(int matriz[MATRIZSIDE][MATRIZSIDE],int filas, int columnas){
    
    
    for(int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
    return;
}

void multiplicacion_matriz(int matrizA[MATRIZSIDE][MATRIZSIDE], int matrizB[MATRIZSIDE][MATRIZSIDE],int matrizC[MATRIZSIDE][MATRIZSIDE],int filaA,int columnaA,int columnaB){
    
    
    for(int i = 0; i < filaA; i++){
        for(int j = 0; j < columnaB; j ++){
            matrizC[i][j] = 0;
            
            for(int k = 0; k < columnaA; k++){
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    return;
}

int main (){

    int filA, columnaA,filaB, columnaB;

    printf("\nIngrese la dimension de las filas y columnas de la matriz A: \n");
    scanf("%d %d", &filA,&columnaA);

    printf("\nIngrese la dimension de las filas y collumnas de la matriz B: \n");
    scanf("%d %d",&filaB,&columnaB);

    if(columnaA != filaB){
        printf("\nLas columnas de la matriz A (%d) deben ser iguales a las filas de la matriz b (%d)", columnaA,filaB);
        return 1;
    }
   
    int matrizA[MATRIZSIDE][MATRIZSIDE];
    int matrizB[MATRIZSIDE][MATRIZSIDE];
    int matrizC[MATRIZSIDE][MATRIZSIDE];

    printf("\nMatriz A (%dx%d): \n",filA, columnaA);
    datos_matriz(matrizA,filA,columnaA);
    
    printf("\nMatriz B(%dx%d): \n",filaB, columnaB);
    datos_matriz(matrizB, filaB, columnaB);
    
    multiplicacion_matriz(matrizA,matrizB,matrizC,filA,columnaA,columnaB);

    printf("\nMatriz C (%dx%d): Resultado: \n", filA, columnaB);
    impresion_matriz(matrizC, filA, columnaB);
    
    
    

    return 0;
}