#include <stdio.h>

int main(int argc, char* arv[]){
    int i;
    int x[5] = {10, 21, 32, 44, 55};
    int *y = x;
    //int y = &x[0];
    printf("i \t \t y \t \t *y \t x[i]\n");
    for(i = 0; i<5; i++){
        printf("%d \t %p \t %d \t %d \n", i, y, *y , x[i]);
        y++;
    }

    return 0;

}