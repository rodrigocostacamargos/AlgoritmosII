#include <stdio.h>

int main(){

    // s = grama r = amarg
    // palindromo -> s = osso r = osso

    char s[1000], r[1000];
    int inicio, fim, contador = 0;

    printf("Informe uma string \n");

    fgets(s, sizeof(s), stdin);

    // Calcular o tamnho da string ex: grama
    while (s[contador] != '\n')
    {
        contador++;
    }

    fim = contador - 1;

    //grama
    //amarg
    for (inicio = 0; inicio < contador; inicio++)
    {
        r[inicio] = s[fim];
        fim--;
    }

    r[inicio] = '\0';  // \0 sinaliza o fim da string
    
    printf("A string reversa eh: %s \n", r);

    
}