#include <stdio.h>

int l, c, i, j, k = 0; 

void iniciarMatrizR(int matrizR[l][c]){
	for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            matrizR[i][j] = 0;
        }
    }
}

void preencherMatrizes(int matriz[k][l][c], int vc, int n){
	for( k = 0; k < n; k++){
		printf("Entre com os valores da matriz %d: \n", (k+1));
		for( i = 0; i < l ; i++ ){
			for( j = 0; j < c ; j++){
				printf("Entre com o valor da %da coluna, da %da linha: ", (j+1), (i+1));
				scanf("%d", &vc);
				matriz[k][i][j] = vc;
			}		
		}
			
	}	
}

void mostrarMatrizes(int matriz[k][l][c], int n){
	printf("Matrizes criadas %d: \n", n);

	for( k = 0; k < n; k++){
		printf("\t----------- MATRIZ %d -----------\n", (k+1));
			for( i = 0; i < l ; i++ ){
				for( j = 0; j < c ; j++){
					printf("\t\t%d", matriz[k][i][j]);
				}		
				printf("\n\n");
			}
		printf("\t---------------------------------\n");		
	}
	
}

void somarMatrizes(int matrizR[l][c], int matriz[k][l][c], int n){
	
	printf("\n\nSoma das matrizes: \n\n");
	for( k = 0; k < n; k++){
		for( i = 0; i < l ; i++ ){
			for( j = 0; j < c ; j++){			
				matrizR[i][j] += matriz[k][i][j];
			}
		}	
	}	
	
}

void mostrarMatrizR(int matrizR[l][c]){
printf("\t----------- MATRIZ RESULTANTE -----------\n", (k+1));
		for( i = 0; i < l ; i++ ){
			for( j = 0; j < c ; j++){
				printf("\t\t%d", matrizR[i][j]);
			}		
			printf("\n\n");
		}
	printf("\t-----------------------------------------\n");		
}

void main (){
	
	int n, vc, vr = 0;
	int matriz[n][l][c];
	int matrizR[l][c];	
	
	printf("Entre com a quantidade de matriz: ");
	scanf("%d", &n );
	
	printf("Entre com a quantidade de linhas e colunas: ");
	scanf("%d %d", &l, &c);

	iniciarMatrizR(matrizR);
	
	preencherMatrizes(matriz, vc, n);

	mostrarMatrizes(matriz, n);

	somarMatrizes(matrizR, matriz, n);

	mostrarMatrizR(matrizR);		
	
}
