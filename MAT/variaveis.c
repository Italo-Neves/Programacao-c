#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade = 37;
    float dolar = 5.49;
    double raio = 3.151617;
    char sexo = 'M';
    char nome[] = "Escola de hackers";

    printf("A idade e %i anos, \n\n", idade); //%i de int
    printf("O Dolar está cotado em %f dolares. \n\n", dolar); //%f de float
    printf("O raio do circulo e %1f centimetros. \n\n", raio); 
    printf("O sexo do cadidato é %c \n\n",sexo); //%c de char
    printf("Os alunos da %s fizeram esse cuso.\n\n",nome);//%s para string

return 0;
}

