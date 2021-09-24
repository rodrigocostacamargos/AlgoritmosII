#include <stdio.h>

int main(){
    int val[6];
    int qtd, i;
    qtd = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite um valor inteiro: ");
        scanf("%i", &val[i]);

        if(val[i] < 0){
            qtd++;
        }
    }

    printf("\nA quantidade de valores negativos foi: %i \n", qtd);
    

}