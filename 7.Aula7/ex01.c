#include <stdio.h>
#include <stdlib.h>

void mostraCadeia(char cadeia[]);

int main(){

    /*

                            // 0 1  2  3  4  5  6  7
    char c[] = "c string"; // [c][][s][t][r][i][n][g]
    char c2[50] = "strin";            // [][][][][][]
    char c3[] = {'a', 'b', 'c', 'd', '\0'};
    */

    char nome[20];
    printf("Informe o seu nome:\n");
    fgets(nome, sizeof(nome), stdin);
    mostraCadeia(nome);
    

    return 0;
}

void mostraCadeia(char cadeia[]){

    printf("Seu nome eh: ");
    puts(cadeia);

}