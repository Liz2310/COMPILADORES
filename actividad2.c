#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>


int main()
{
    // Ejercicio 2
    // Ximena Gonzalez

    int index = 0;
    int num = 0;
    int temp;
    char respuesta[2];

    while (true){

        printf("Ingrese un numero: ");
        scanf("%d", &temp);

        if (index == 0 && temp == 0){
            printf("Secuencia de numeros finalizada: \n");
            break;
        }else{
            unsigned pow = 10;
            while(temp >= pow){
                pow *= 10;
            }

            num = num * pow + temp;
            printf("%d\n",num);

            printf("Desea salir? (si/no): ");
            scanf("%s", &respuesta);
            if (strcmp(respuesta, "si") == 0){
                break;
            }else{
                index += 1;
            }
        }
        
    }
    return 0;
} 
