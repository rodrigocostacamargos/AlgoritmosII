#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[]){

    int i;
    char comando[80];
    if(argc < 2){
        printf("o nome do diretorio de backup deve ser fornecido \n");
        return 0;
    }

    comando[0] = '\0';
    strcpy(comando, "mkdir ");
    strcat(comando, argv[1]); // mkdir <identificador>
    printf("%s\n", comando);
    system(comando);

    comando[0] = '\0';
    strcpy(comando, "cp  ./ *.c ./");
    strcat(comando, argv[1]); // cp ./*.c ./ <identificador>
    printf("%s\n", comando);
    system(comando);

    return 0;

}
