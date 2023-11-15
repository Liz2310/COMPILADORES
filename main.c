#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Ejercicio 1
    // float promedio;
    // int num_calif;
    // printf("Ingresar la cantidad de calificaciones ");
    // scanf("%d", &num_calif);
    
    // for(int i=0; i < num_calif; i++){
    //     float calif;
        
    //     while(true){
    //         printf("Ingresar la calificacion ");
    //         scanf("%f", &calif);
            
    //         if(calif < 1 || calif > 10){
    //             printf("Calificacion invalida, volver ingresar\n");
    //         }else{
    //             break;
    //         }
    //     }
        
    //     promedio += calif;
    // }
    
    // promedio /= num_calif;
    
    // if(promedio < 6){
    //     printf("Alumno reprobado, promedio: ");
    //     printf("%f", promedio);
    // }else{
    //     printf("Alumno aprobado, promedio: ");
    //     printf("%f", promedio);
    // }

    // Ejercicio 2
    // int altura;
    // printf("Ingresar la cantidad de pisos de la piramide: ");
    // scanf("%d", &altura);

    // int num_asteriscos = 1;
    // int num_espacios = 0;

    // for (int i = 0; i < altura; i++){
    //     num_espacios += 1;
    // }


    // for (int k = 0; k < altura; k++){
    //     printf("%*c", num_espacios, ' ');
        
    //     for (int j = 0; j < num_asteriscos; j++){
    //         printf("*");
    //     }

    //     printf("%*c\n", num_espacios, ' ');

    //     num_asteriscos += 2;
    //     num_espacios -= 1;
    // }

    // Ejercicio 3

    // MCD(A,B)
    // int A;
    // int B;

    // printf("Ingresar el valor de A: ");
    // scanf("%d", &A);

    // printf("Ingresar el valor de B: ");
    // scanf("%d", &B);

    // while (true){
        
    //     // Si A = 0 entonces MCD(A,B)=B, ya que el MCD(0,B)=B, y podemos detenernos.
    //     if (A == 0){
    //         printf("El MCD es ");
    //         printf("%d", B);
    //         break;

    //     // Si B = 0 entonces MCD(A,B)=A, ya que el MCD(A,0)=A, y podemos detenernos.  
    //     }else if (B == 0){
    //         printf("El MCD es ");
    //         printf("%d", A);
    //         break;
        
    //     // Continuar con el algoritmo
    //     }else{
    //         int residuo = A % B;
    //         A = B;
    //         B = residuo;
    //     }
    // }
 
    // // Ejercicio 4
    int size = 11;
    int arr[] = {2, 43, 3, 1, 9, 23, 12, 8, 56, 12, 21};

    for (int i = 1; i < size; i++){
        int curr =  arr[i];
        int j = i - 1;

        while (curr < arr[j] && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = curr;
    }

    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
} 
