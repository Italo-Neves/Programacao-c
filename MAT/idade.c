#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade, ano_atual, ano_nascimento;

    printf("Informe o ano atual: ");
    scanf("%i", &ano_atual);

    printf("\n\n Informe o ano de nascimento: ");
    scanf("%i",&ano_nascimento );

    idade = ano_atual - ano_nascimento;

    printf("\n\n Para o ano informado, idade= %i ano(s). \n\n", idade);


return 0;
}

