#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* arv[]){

    int i;
    char *x;
    x = malloc(5);
    *x = 'a';
    *(x+1) = 'b';
    *(x+2) = 'c';
    *(x+3) = 'd';
    *(x+4) = 'e';

    char *y = x;

    printf("i \t \t y \t \t *y \t x[i]\n");
    for(i = 0; i<5; i++){
        printf("%d \t %p \t %c \t %c \n", i, y, *y , x[i]);
        y++;
    }

    free(x);

    return 0;





}