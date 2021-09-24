#include <stdio.h>
#include <stdlib.h>

#define qnt 4

// entrada de dados
void entrada(int * n){
    int i;

    printf("Entrada de dados: \n");
    for (i = 0; i < qnt; i++){
        printf("%i: ", i+1);
        scanf("%i", &n[i]);
    }
}

// procedimento troca os valores no vetor usando os indices
void troca(int * n, int menor, int maior){
    int temp;

    temp = n[maior];
    n[maior] = n[menor];
    n[menor] = temp;
}

// procedimento para ordenar o vetor
void ordenar(int * n){
    int i, j, temp;

    for (i = 0; i < qnt-1; i++){
        for (j = i + 1; j< qnt; j++){
            if (n[j] < n[i]){
                //     vetor, ind_menor, ind_menor
                troca(&n[0], j, i);
            }
        }
    }
}

// procedimento para mostrar o resultado
void mostrar (int * n){
    int i;

    printf("\n Vetor ordenado: \n");
    for (i = 0; i < qnt; i++){ 
        printf("%i \t", n[i]);
    }
    printf("\n");
}

int main (){
    int numeros[qnt];
    system("cls");

    entrada(&numeros[0]);
    ordenar(&numeros[0]);
    mostrar(&numeros[0]);

    printf("\nFim do programa.\n\t-Ana Atala");

    return (0);
}