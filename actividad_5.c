#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>


int main()
{
    char r[] = "r";
    char input[2];
    int num;

    printf("Entrada---> ");
    scanf("%s", &input);

    if (strcmp(input, r) == 0)
    {
        printf("%s\n", "S1");
        printf("Entrada---> ");
        scanf("%d", &num);
        
        if ( (num >= 4 && num <= 9) || num == 0)
        {
            printf("%s\n", "S4");
            
        }else if (num == 1 || num == 2)
        {
            printf("%s\n", "S2");

        }else if(num == 3){
            printf("%s\n", "S5");

        }else if(num >= 10 && num <= 29){
            printf("%s\n", "S2");
            printf("%s\n", "S3");

        }else if(num == 30 || num == 31){
            printf("%s\n", "S5");
            printf("%s\n", "S6");
        }
    }
    
    return 0;
} 
