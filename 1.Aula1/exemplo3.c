#include <stdio.h>
int main (){

	int mat [3][3];
	
	for (int i = 0 ; i < 3 ; i++){
		for (int j = 0 ; j < 3 ; j ++ ) {
			scanf ("%i", &mat[i][j]);
		}
	}
	
	int cont=0;	
	for (int i = 0 ; i < 3 ; i++){
		for (int j = 0 ; j < 3 ; j ++ ) {
			if (mat[i][j]%2==0){
			cont++;
			}
		}	
	}
	
	printf ("num de pares: %i", cont);

return 0;

}