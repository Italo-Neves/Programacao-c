#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));

    /*Código para gerar números aleatorios de 0 a 9. se quiser gerar de 0 a 100 mude o 9 para 100*/
    printf("%d",rand() % 9);
    printf("\n\n");
return 0;
}

