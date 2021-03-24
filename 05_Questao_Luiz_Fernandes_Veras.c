#include<stdio.h>
#include<stdlib.h>

void imprimirMatriz (int mA[5][5][5]);

int main(){
	int mA[5][5][5], i, j, k;
		
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			for(k=0; k<5; k++){
				mA[i][j][k] = rand()%10;				
			}			
		}
	}
	imprimirMatriz(mA);	
	
	return 0;
}

void imprimirMatriz(int mA[5][5][5]){
	int i, j, k;
    printf("\nMatriz impressa!\n\n");
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			for (k=0; k<5; k++){
			printf("[%d]\t", mA[i][j][k]);
			}
		printf("\n");
		}
	printf("\n");	
	}
}


