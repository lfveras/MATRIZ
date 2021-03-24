#include<stdlib.h>
#include<stdio.h>
void calculaResultado(char prova[5][10]);
main(){
	
	char prova[5][10];
	int i,j;
		
	for(i=0;i<5;i++){
		printf("\tCORRETOR DE PROVAS\n\n");
		printf("Informe as respostas do %i%c aluno: \n", i+1,167);
		for(j=0;j<10;j++){
				printf("Questao %i: ",j+1);
				fflush(stdin);			
				scanf("%c", &prova[i][j]);	
		}	
		system("cls");
	}

calculaResultado(prova);

}
void calculaResultado(char prova[5][10]){
	char gab[10]={'a','a','c','a','d','b','c','d','b','a'};// respostas de A a D.
	int resultado[5]={0,0,0,0,0};
	int i,j;
		for(i=0;i<5;i++){
			for(j=0;j<10;j++){
				if( prova[i][j] == gab[j]){
					resultado[i] = resultado[i]+1;
				}
			}
		}
		printf("\tResultados.\n");
		for(i=0;i<5;i++){			
			printf("Aluno %i: %i\n", i+1, resultado[i]);	
		}
			
}
