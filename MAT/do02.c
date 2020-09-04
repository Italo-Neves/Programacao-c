#include<stdio.h>
#include<stdlib.h>

int main(){
    int op;

    do{
        system("cls");
        printf("Escolha uma opção: \n\n");
        
        printf("1 - Procurar computador desprotegido\n");
        printf("2 - Invadir computador desprotegido\n");
        printf("3 - Exibir lista de usuarios com senha em branco\n\n");

        scanf("%d",&op);
    }while(op < 1 || op > 3);
    printf("\n Sua opção foi = %d \n\n",op);

return 0;
}

