#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// valor terminal de NUM debe ser 2
int num(char terminal_mitad){
    if (terminal_mitad == '2')
    {
        return 1;
    }else{
        return 0;
    }
}

// valores terminales de ident son x y y (x va antes de y)
int ident(char terminal_inicial, char terminal_final){
    if (terminal_inicial == 'x' && terminal_final == 'y'){ // x y y
        return 1;
    }else{
        return 0;
    }
}

// FACTOR --> IDENT y FACTOR --> NUM
// IDENT recibe la x y y de la expresion (antes del - y despues del *)
// NUM recibe el numero de la expresion (antes del *)
int factor(char antes_de_menos, char antes_de_asteris, char despues_de_asteris){
    if (ident(antes_de_menos, despues_de_asteris) == 1 &&  num(antes_de_asteris) == 1){ // IDENT y NUM e IDENT
        return 1;
    }else{
        return 0;
    }
}

// TERM --> FACTOR
// Revisa si contiene el * (en caso de que no, es invalida la cadena)
// Manda a factor la x (antes del -)
// Manda a factor el 2 y y (despues del -)
int term(char antes_de_menos, char* despues_de_menos){
    if(strchr(despues_de_menos, '*') != NULL){
        if (factor(antes_de_menos, despues_de_menos[0], despues_de_menos[2]) == 1){ // FACTOR y FACTOR y FACTOR
            return 1;
        }
    }else{
        return 0;
    }
}

// EXPR - TERM --> (llama a) TERM
// Revisa si contiene el - (en caso de que no, es invalida la cadena)
// Toma el index de la posicion del caracter antes del - (si es mayor a 0 indica que hay mas de un caracter
// lo que es invalido porque la expresion solo tiene a x antes del -)
// Toma los caracteres despues del - (2*y) y los manda a TERM
int expr(char* cadena){
    if(strchr(cadena, '-') != NULL){
        char* ptr = strrchr(cadena, '-');
        char char_antes;
        char chars_despues[100];
        int index_antes = (ptr-cadena) - 1;

        if(index_antes > 0){
            return 0;
        }else{
            char_antes = cadena[index_antes];
            int index_despues = (ptr-cadena) + 1;
            strncpy(chars_despues,cadena+(index_despues),3);
            if (term(char_antes, chars_despues) == 1){ // TERM y TERM * FACTOR
                return 1;
            }
        }
    }else{
        return 0;
    }
}


int main(){
    // EXPR --> (llama a) EXPR - TERM
    // Recibe la expresion completa y lo manda a validar con las demas funciones
    char input[100];
    printf("Entrada: ");
    scanf("%s", &input);
    if (expr(input) == 1){ //EXPR - TERM
        printf("Correcto\n");
    }else{
        printf("Error\n");
    }
    return 0;
}