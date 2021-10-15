#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livro{
    char titulo[50];
    char autor[50];
    char assunto[100];
    int livro_id;
};

void imprimeLivro(struct Livro *livro){

    printf("Titulo do livro: %s\n", livro->titulo);
    printf("Autor do livro: %s\n", livro->autor);
    printf("Assunto do livro: %s\n", livro->assunto);
    printf("Id do livro: %d\n", livro->livro_id);
}

int main(){

    struct Livro livro1;
    struct Livro livro2;

    strcpy(livro1.titulo, "C Como Programar");
    strcpy(livro1.autor, "Deitel");
    strcpy(livro1.assunto, "Progracao em C");
    livro1.livro_id = 1;

    strcpy(livro1.titulo, "Java Como Programar");
    strcpy(livro1.autor, "Deitel");
    strcpy(livro1.assunto, "Progracao em Java");
    livro1.livro_id = 2;

    imprimeLivro(&livro1);

  
    /*
    printf("Titulo do livro2: %s\n", livro2.titulo);
    printf("Autor do livro2: %s\n", livro2.autor);
    printf("Assunto do livro2: %s\n", livro2.assunto);
    printf("Id do livro2: %d\n", livro2.livro_id);
    */

}