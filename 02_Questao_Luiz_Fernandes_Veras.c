#include<stdlib.h>
#include<stdio.h>
void mAprincipal (int mA[4][4]);
void mAtransformada(int mA[4][4]);
main(){
	
	int mA[4][4],i,j;
	
	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			mA[i][j] = 1 + (rand()%20);
		}
	}
	mAprincipal (mA);
	printf("\t\n");
	mAtransformada(mA);
}
void mAprincipal (int mA[4][4]){
	int i,j;
	printf("\tMatriz Principal\n");
	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			printf("[%i]\t",mA[i][j]);
		}
		printf("\t\n");
	}
}
void mAtransformada(int mA[4][4]){
	int i,j;
	printf("\tMatriz transformada\n");
	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			if(i<j){
				mA[i][j] = 0;
			}
			printf("[%i]\t",mA[i][j]);
		}
		printf("\t\n");
	}
	
}
