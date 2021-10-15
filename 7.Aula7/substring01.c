#include <stdio.h>

void substring(char s[], char sub[], int p, int t);

int main(){
    char string[1000], sub[1000];
    int posicao, tamanho;

    printf("Entre com uma string:\n");
    fgets(string, sizeof(string), stdin);

    printf("Entre com a posicao e o tamanho  da string");
    scanf("%i %i", &posicao, &tamanho);

    substring(string, sub, posicao, tamanho);

    printf("\nA substring eh: %s \n", sub);

    return 0;

}

void substring(char s[], char sub[], int p, int t){

    int c = 0;

    // programacao
    // 3, 5 - grama

    while (c < t)
    {
        sub[c] = s[p+c];
        c++;
    }

}