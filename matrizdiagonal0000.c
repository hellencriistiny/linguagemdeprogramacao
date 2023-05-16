#include <stdio.h>

int main(){
	int i,j,vetor[3],matriz[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				vetor[i]=matriz[i][j];
			}
		}
	}
	for(i=0;i<3;i++){
		printf("%d ", vetor[i]);
	}
	
}
