#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   srand(time(NULL));

    int numero, sorte;
    sorte = rand() % 9;

    printf("Escolha um número entre 0 a 9: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 9){
        printf("\n\nEu disse um numero entre  0 e 9\n\n");
    }else{
        if(numero == sorte){
            printf("\n\n Você ACERTOU. numero sorteado: %d. \n\n");
        }else{
            printf("\n\n Você ERROU. numero sortado: %d \n\n",sorte);
            
        }
    }    
return 0;
}

