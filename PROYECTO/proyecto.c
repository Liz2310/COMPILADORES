#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

char caracter;
char caracter_sig;

/* Function Statement */
int P_prima();
void P();
int coincidir(char caracter);

/* Function Definition */
int coincidir(char caracter_func){
    if (caracter_sig == caracter_func){
        printf("Ingresa el siguiente caracter: ");
        scanf(" %c", &caracter);
    }
    else if (caracter == '$'){
        return 0;
    }

    return 0;
}

int P_prima(){
    if (caracter_sig == '+'){
        coincidir(caracter_sig);
        coincidir(caracter);
        P();
    }
    
    return 0;
}

void P(){
    if (caracter == 'Q'){
        caracter_sig = '+';
        P_prima();
    }
}

int main(){

    printf("Ingresa el caracter: ");
    scanf("%c", &caracter);
    P();

    if (caracter == '$'){
        printf("Analisis exitoso!!!\n");
    }else{
        printf("Error...\n");
    }
    
    return 0;
}