#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>


int main()
{
    char estados[4][7] = {"S0 = 00", "S1 = 01", "S2 = 10", "S3 = 11"};
    int estado_actual = 0;
    int num;

    while (true)
    {
        printf("Entrada---> ");
        scanf("%d", &num);

        if (num == 1 && estado_actual == 0)
        {
            printf("%.7s\n", estados[0]);
        }else if (num == 0 && estado_actual == 0)
        {
            estado_actual = 1;
            printf("%.7s\n", estados[1]);
        }else if (num == 1 && estado_actual == 1)
        {
            estado_actual = 2;
            printf("%.7s\n", estados[2]);
        }else if (num == 0 && estado_actual == 1)
        {
            estado_actual = 3;
            printf("%.7s\n", estados[3]);
        }else if (num == 1 && estado_actual == 2)
        {
            printf("%.7s\n", estados[2]);
        }else if (num == 0 && estado_actual == 2)
        {
            estado_actual = 3;
            printf("%.7s\n", estados[3]);
        }else if (num == 1 && estado_actual == 3){
            printf("%.7s\n", estados[3]);
        }else if (num == 0 && estado_actual == 3){
            estado_actual = 0;
            printf("%.7s\n", estados[0]);
        }else{
            break;
        }
        
    }
    
    return 0;
} 
