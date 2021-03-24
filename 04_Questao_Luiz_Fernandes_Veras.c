#include<stdlib.h>
#include<stdio.h>
void mAprincipal (float mA[3][6]);
void colImpar (float mA[3][6]);
void mediaCol2e4(float mA[3][6]);
void mAmodificada(float mA[3][6]);
main(){
	
	float mA[3][6];
	int i,j;
	
	for (i=0; i<3; i++){
		for (j=0; j<6; j++){
			mA[i][j] = 3+(i*j);
		}
	}
	mAprincipal(mA);
	colImpar(mA);
	mediaCol2e4(mA);
	mAmodificada(mA);
}
void mAprincipal (float mA[3][6]){
	int i,j;
	printf("\tMatriz Principal\n");
	for (i=0; i<3; i++){
		for (j=0; j<6; j++){
			printf("[%.2f]\t",mA[i][j]);
		}
		printf("\t\n");
	}
}
void colImpar (float mA[3][6]){
	int i,j;
	float r=0;
	printf("\n\tSomatoria das colunas impares\n");
	for (i=0; i<3; i++){
		for (j=0; j<6; j++){
			if(j%2 != 0){
			r = r+mA[i][j];	
			}			
		}		
	}
	printf("\t\t[%.2f]\n",r);

}
void mediaCol2e4(float mA[3][6]){
	int i,j;
	float m=0;
	printf("\n\tMedia aritimetica entre a 2 e 4 colunas\n");
	for (i=0; i<3; i++){
		for (j=0; j<6; j++){
			if(j>0 && j<5 && j%2 !=0){				
			 m = (m+mA[i][j]/6);	
			}			
		}		
	}
	printf("\t\t[%.2f]\n",m);
}
void mAmodificada(float mA[3][6]){
	int i,j;
	float s=0;
	printf("\n\tMatriz Modificada\n");
	for (i=0; i<3; i++){
		for (j=0; j<6; j++){
			if(j>=0 && j<2){				
			 s = (s+(mA[i][1]+mA[i][2]));
			 mA[i][5] = s;
			 s = 0;
			}			
		}		
	}
	for (i=0; i<3; i++){
		for (j=0; j<6; j++){
			printf("[%.2f]\t",mA[i][j]);
		}
		printf("\t\n");
	}
	
}
