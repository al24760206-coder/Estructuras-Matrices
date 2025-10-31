#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char tablero[3][3];
const char jugador1 = 'X';
const char pc = 'O';
int casillas_ocupadas = 0;
int puntuacion_jugador = 0;
int puntuacion_pc = 0;
int empates = 0;


void imprimir_tablero(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            
            printf("%c", tablero[i][j]);

            if (i < 2){
                printf("_");
            } else {
                printf (" ");
            }

            if (j < 2){
                printf("|");
                
            }
        }
        printf ("\n");
    }
    printf("\n");
}

void resetear_tablero(){
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            tablero[i][j] = ' ';
        }
    }
    casillas_ocupadas = 0;
}

int casilla_vacia(int x, int y){
    if (x < 0 || x > 2 || y < 0 || y > 2){ // condicion por si esta fuera derango
        return 0;
    }
    if (tablero[x][y] == ' '){ // casillas vacia
        return 1; 
    }
    return 0; // casilla ocupada
}

void jugada_jugador(){
    int x, y;

    while (1){
        printf ("intrega fila (de 0 a 2): ");
        scanf("%d", &x);
        printf ("intrega columna (de 0 a 2): ");
        scanf("%d", &y);
        
        if(casilla_vacia(x, y)){
            tablero[x][y] = jugador1;
            casillas_ocupadas++;
            break;
        } else {
            printf("casilla ocupada, ingresa otra casilla: ");
        }
        
    }
}

void jugada_pc(){
    int x, y;
// la pc busca una casilla aleatoria que este vacia
    do{
        x = rand () % 3;
        y = rand () % 3;
    } while(!casilla_vacia(x,y));
   
    tablero[x][y] = pc;
    casillas_ocupadas++;
}

int ganador(){
    //verificando en las filas si hay ganador
    for(int i = 0; i < 3; i++){
        if(tablero[i][0] != ' ' && tablero[i][0] ==  tablero[i][1] && tablero[i][1] ==  tablero[i][2]){
            return 1;
        }
    }
    //verificando columnas
    for(int i = 0; i < 3; i++){
        if(tablero[0][i] != ' ' && tablero[0][i] ==  tablero[1][i] && tablero[1][i] ==  tablero[2][i]){
            return 1;
        }
    }
    //verificando diagonal (\)
    if(tablero[0][0] != ' ' && tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2]){
        return 1;
    }
        //verificando diagonal (/)
    if(tablero[0][2] != ' ' && tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0]){
        return 1;
    }
    
    return 0;

}

char ganador_actual(){
        //verificando en las filas si hay ganador
    for(int i = 0; i < 3; i++){
        if(tablero[i][0] != ' ' && tablero[i][0] ==  tablero[i][1] && tablero[i][1] ==  tablero[i][2]){
            return tablero[i][0];
        }
    }
    //verificando columnas
    for(int i = 0; i < 3; i++){
        if(tablero[0][i] != ' ' && tablero[0][i] ==  tablero[1][i] && tablero[1][i] ==  tablero[2][i]){
            return tablero[0][i];
        }
    }
    //verificando diagonal (\)
    if(tablero[0][0] != ' ' && tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2]){
        return tablero[0][0];
    }
        //verificando diagonal (/)
    if(tablero[0][2] != ' ' && tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0]){
        return tablero[0][2];
    }
    
    return ' ';

}

void puntuacion(){
    printf("\n puntuacion jugador: %d \n", puntuacion_jugador);
    printf("\n puntuacion PC: %d \n", puntuacion_pc);
    printf("\n empates: %d \n", empates);
}
int main (){
    srand(time(0));

    int iniciar_turno;
    char nuevo_juego;

    do{
        //se decide quien empieza de forma al azar con un operador ternario
        iniciar_turno = (rand() % 2 == 0 ? 1 : 2);
        resetear_tablero();

        while(1){
            imprimir_tablero();

            if(iniciar_turno == 1){
                jugada_jugador();
                iniciar_turno = 2;
            } else {
                jugada_pc();
                iniciar_turno = 1;
            }
            //validar apartir del 5to movimiento
            if(casillas_ocupadas >= 5){
                char verificar_ganador = ganador_actual();

                if(verificar_ganador != ' '){
                    imprimir_tablero();

                    if(verificar_ganador == jugador1){
                        printf("Gano el jugador 1 ");
                        puntuacion_jugador++;
                    } else {
                        printf("Gano la PC ");
                        puntuacion_pc++;
                    }
                    break;
                }
            }

            if (casillas_ocupadas == 9){
                imprimir_tablero();
                printf("Empate ");
                empates++;
                break;
            }

        }

        puntuacion();

        printf("\n Quieres jugar denuevo?(s/n): ");
        scanf(" %c", &nuevo_juego);
    } while (nuevo_juego == 's' || nuevo_juego == 'S');

    return 0;
}