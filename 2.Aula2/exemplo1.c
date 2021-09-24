#include<stdio.h>

int quadrado(int numero){
    return numero * numero;
}

void mostra(int numero){
    printf("o quadrado do numero %i eh %i \n", numero, quadrado(numero));
}



int main(){

    int x = 5;
    mostra(x);

}