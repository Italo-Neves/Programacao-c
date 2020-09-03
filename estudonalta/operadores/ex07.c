#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int dob;
    int te;
    printf("Digite um número: ");
    scanf("%i",n);
    dob = n * 2;
    te = n/3;
    printf("Analizando o númeor %i o seu dobro é %i e a sua terça parte é %.2f \n",n,dob,te);

return 0;
}

