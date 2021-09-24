#include <stdio.h>
int main(int argc, char* argsv[]){

    int x = 10;
    int *y;  // z -> y -> x
    int *z;
    y = &x;
    z = y;

    printf("Identificador \t Endereco \t conteudo \n");
    printf("\t x \t %p \t %d \n", &x, x);
    printf("\t y \t %p \t %p \n", &y, y);
    printf("Valor apontado por y => *y: %d \n", *y);
    printf("Valor apontado por z => *z: %d \n", *z);


    return 0;
}