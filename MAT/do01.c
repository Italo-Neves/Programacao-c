#include<stdio.h>
#include<stdlib.h>

int main(){
    float area,raio;
    do{
        printf("Digite um valor para o raio: ");
        scanf("%f",&raio);


    }while(raio <0);
    area = 3.14 * raio * raio;
    printf("Area = %f \n\n", area);
    
return 0;
}

