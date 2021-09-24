#include <stdio.h>

int main(){

    float notas[5];
    float media = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a nota do estudante %d: ", i+1);
        scanf("%f", &notas[i]);

        media = media + notas[i];
    }

    media = media / 5;
    printf("A média eh: %f \n", media);

    for (int j = 0; j < 5; j++)
    {
        if(notas[j] > media){
            printf("Nota: %f \n", notas[j]);
        }
    }
    
    
    
}