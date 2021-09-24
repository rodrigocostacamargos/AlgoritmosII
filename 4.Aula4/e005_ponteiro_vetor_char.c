#include <stdio.h>

int main(int argc, char* arv[]){
    int i;
    char x[5] = {'a', 'b', 'c', 'd', 'e'};
    char *y = x;
    //int y = &x[0];
    printf("i \t \t y \t \t *y \t x[i]\n");
    for(i = 0; i<5; i++){
        printf("%d \t %p \t %c \t %c \n", i, y, *y , x[i]);
        y++;
    }

    return 0;

}