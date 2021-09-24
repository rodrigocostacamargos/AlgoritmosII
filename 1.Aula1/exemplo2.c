#include <stdio.h>

int main(){

    long int vet[100];

    vet[0] = 0;
    vet[1] = 1;
    
    for (int i = 2; i < 50; i++)
    {
        vet[i] = vet[i-2] + vet[i-1];
    }


    for (int j = 0; j < 50; j++)
    {
        printf("%ld \n", vet[j]);
    }
  
}