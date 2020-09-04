#include<stdio.h>
#include<stdlib.h>

// Definição das constantes
#define Pi 3.14159265
#define novalinha '\n' 

int main(){
    float real;
    float dolar = 5.49;
    float conversao;

    printf("Qual é o valor em real\? ");
    scanf("%f", &real);

    conversao = real * dolar;

    printf("\n Valor em dolares: %.2f\n\n", conversao);
return 0;
}

