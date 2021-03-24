#include<stdio.h>
#include<stdlib.h>

void imprimirMatriz (int mA[5][5]);

int main(){
	int mA[5][5], x, i, j, cont=0, opcao;
		
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			mA[i][j] = rand() % 10;
		}
	}
	imprimirMatriz(mA);
	
	
	do{
	printf("\nDigite o numero que deseja encontrar\n");
	scanf("%d", &x);
	
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			if (x==mA[i][j])
			printf("[%d][%d]\t", i, j);
			else cont++;
		}	
	}
	if (cont == 25)
		printf("\nNao encontrado!\n");
		
					
	printf("\n\nDeseja pesquisar outro numero? 1 - sim, 0 - nao \n");
	scanf("%d", &opcao);
	} while (opcao == 1);
	
	return 0;
}

void imprimirMatriz(int mA[5][5]){
	int i, j;
    printf("\nMatriz impressa!\n\n");
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf("[%d]\t", mA[i][j]);
		}
		printf("\n");
	}
}
