# include <stdio.h>
# include <stdlib.h>

int main(){
    struct estudiantes{
        char nombre[50];
        int edad;
        float promedio;
    };

    struct estudiantes alumnos[3];

    for(int i = 0; i < 3; i++){
    printf("\nIngrese los datos del estudiante: \n");
    
    printf("\nNombre: \n");
    scanf("%s", alumnos[i].nombre);

    printf("\nIngrese la edad del estudiante: \n");
    scanf("%d", &alumnos[i].edad);

    printf("\nIngrese el promedio de los estudiantes: \n");
    scanf("%f", &alumnos[i].promedio);

    }

    for(int i = 0; i < 3; i++){
        printf("---------------------\n");
        printf("\nNOMBRES: %s\n", alumnos[i].nombre);
        printf("\nEDAD: %d \n", alumnos[i].edad);
        printf("\nPROMEDIO: %.2f \n", alumnos[i].promedio);
    }
    return 0;

}