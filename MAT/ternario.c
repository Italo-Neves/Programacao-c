#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d",&numero);

    //<condição> ? <se 1 ou VERDADEIRO operação 1> :<se 0 ou FALSO operação 2> 
    
    (numero % 2) ?printf("Numero %d é impar. \n\n",numero) : printf("Numero %d = par.\n\n", numero);
        

return 0;
}

