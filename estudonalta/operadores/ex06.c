#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int su;
    int at;
    printf("Digite um número: ");
    scanf("%i",&n);
    su = n + 1;
    at = n - 1;
    printf("O Antecessor do número %i é %i e o sucessor é %i \n ",n,at,su);
return 0;
}

