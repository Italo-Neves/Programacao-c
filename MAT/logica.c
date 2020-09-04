#include<stdio.h>
#include<stdlib.h>

int main(){
    char sexo;
    int idade;

    printf("Você é homem(H) ou mulher(M)? ");
    scanf("%c",&sexo);

    printf("\n Qual é a sua idade? ");
    scanf("%i",&idade);

    if (sexo == 'H' || sexo == 'h' && idade >= 30){
        printf("\n\n Todos os criterios batem - seve para carlinha. \n\n");
    }else{
        printf("\n\n Algum dos criterios informados não corresponde ao procurado por Carlinha\n\n");
    }
return 0;
}

