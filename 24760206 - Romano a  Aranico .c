#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int romano_a_int (char r){
    switch (r)
    {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    
    
    default: return 0;
    
    }
}
//funcion para validar que los caracteres romanos sean correctos
int validacion_caracteres_romano(char c){
    char caracteres_validos[] = "IVXLCDM";
   

    for (int i = 0; i < strlen(caracteres_validos); i++){
        if (c == caracteres_validos[i]){
            return 1;
        }
    }
    return 0;
}
//funcion para validar toda la cadena para evirar ingreso de simbolos
int numero_romano_valido(const char *str){
    if (strlen (str) == 0) return 0;

    for (int i = 0; i < strlen(str); i++){
        if(!validacion_caracteres_romano(str[i])){
            return 0;
        }
    }
    return 1;
}

int romano_a_arabico (const char *roman_str){
    
    int tamano = strlen(roman_str);
    int total = 0;
    int i;

    for (i = 0; i < tamano; i++){
        int valorActual = romano_a_int(roman_str[i]);

        if (i + 1 < tamano){
            int siguienteValor = romano_a_int(roman_str[i + 1]);
            
            if (valorActual < siguienteValor){
                total += (siguienteValor - valorActual);
                i++;
                continue;
            }
        }
        total += valorActual;
    }
    return total;
}

int main(){

    char numero_romano[25];
    int entrada_valida = 0;

    while (!entrada_valida){
        
        printf("\ningrese un numero romano: (SOLO MASYUSCULAS, Y LOS SIGUIENTES CARACTERES I V X L C D M) \n");
        scanf("%s", numero_romano);
        
        if (numero_romano_valido(numero_romano)){
            entrada_valida = 1;
        } else {
            printf("\nEl caracter ingresado no es correcto, por favor intente denuevo.\n");
        }
    }
    
    int resultado = romano_a_arabico(numero_romano);

    printf("\nEl numero romano '%s' a su valor decimal es: %d\n", numero_romano, resultado);

    return 0;
}