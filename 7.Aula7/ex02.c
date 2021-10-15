#include <stdio.h>

int main(){
    char nome[] = "Rodrigo Costa";

    printf("%c \n", *(nome));  // R
    printf("%c \n", *(nome+1));  // o
    printf("%c \n", *(nome+8));  // R


    char *pnome = nome;
    printf("%c \n", *(pnome));  // R
    printf("%c \n", *(pnome+1));  // o
    printf("%c \n", *(pnome+8));  // R
}