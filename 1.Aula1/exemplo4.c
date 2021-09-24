#include <stdio.h>
int main (){

	int mat [3][3];
    int soma = 0;
	
	for (int i = 0 ; i < 3 ; i++){
		for (int j = 0 ; j < 3 ; j ++ ) {
			scanf ("%i", &mat[i][j]);
            if(i == j){
                soma = soma + mat[i][j];
            }
		}
	}

    printf("A soma dos elementos na diagonal eh: %i", soma);
	
return 0;

}