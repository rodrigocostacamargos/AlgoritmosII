#include <stdio.h>
#include <string.h>

struct cadastro {
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};


int main()
{
    struct cadastro c;
    
    /*
    strcpy(c.nome, "Carlos");
    c.idade = 18;
    strcpy(c.rua, "Avenida Brasil");
    c.numero = 1082;
    */
    
    printf("Informe o nome: ");
    gets(c.nome);


    printf("\nInforme a idade: ");
    scanf("%d", &c.idade);

    printf("\nInforme a rua: ");
    gets(c.rua);
 
    printf("\nInforme o numero da rua: ");
    scanf("%d", &c.numero);
    
    printf("Nome: %s", c.nome);
    printf("\nIdade: %d", c.idade);
    printf("\nEndereço: %s", c.rua);
    printf("\nNumero: %d", c.numero);
    printf("\n");

    return 0;
}
