#include <stdio.h>

int main(){

    int c = 10;
    int *p; // p->c

    p = &c;

    printf("valor da variável c: %i \n", c);
    printf("acessando o valor da variável c pelo ponteiro p: %i \n", *p);
    printf("endereço da variável c: %p \n", p);

    return 0;
}