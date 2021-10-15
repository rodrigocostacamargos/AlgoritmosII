#include <stdio.h>
#include <stdlib.h>

char *substring(char *string, int posicao, int tamanho);

int main(){
    char string[1000], *sub;
    int posicao, tamanho;

    printf("Entre com uma string:\n");
    fgets(string, sizeof(string), stdin);

    printf("Entre com a posicao e o tamanho  da string");
    scanf("%i %i", &posicao, &tamanho);

    sub = substring(string, posicao, tamanho);

    printf("\nA substring eh: %s \n", sub);

    free(sub);

    return 0;

}

char *substring(char *string, int posicao, int tamanho){

    char *p; //substring

    p = malloc(tamanho * sizeof(char));
    int c = 0;

    // programacao
    // 3, 5 - grama

    for (c = 0; c < tamanho; c++)
    {
        *(p+c) = *(string+posicao+c);
    }

    return p;
    

}