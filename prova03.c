#include <stdio.h>
#include <string.h>

#define MAX_LINHA 100
#define MAX_COLUNA 100
#define MAX_PALAVRA 100

//Funcao paar criar uma matriz de tamanho MXN
void Criarmatriz (char matriz[MAX_LINHA][MAX_COLUNA], int m, int n){
  int i,j;
   for(i = 0; i <m; i++ ){
   	for(j = 0; j<n; j++){
   		printf("informe o elemento da posicao(%d,%d): ", i+1, j+1);
   		 scanf("%s",matriz[i][j]);
	   }
   }
}
//Funcao para imprir a matriz
void Imprimirmatriz(char matriz[MAX_LINHA][MAX_COLUNA], int m, int n){
	int i, j;
	for(i=0; i<m; i++){
		for(j=0;j<n;j++){
			printf("%s", matriz[i][j]);
		}
		printf("\n");
	}
}
//Funcao para procurar uma matriz na horizontal
int procurarHorizontal(char matriz[MAX_LINHA][MAX_COLUNA],char palavra[MAX_PALAVRA], int m, int n){
	int i, j, count=0;
	for(i=0;i<m;i++){
		for(j=0;j<=n - strlen(palavra);j++){
			if(strncmp(matriz[i][j],palavra, strlen(palavra))==0){
				count++;
			}
		}
	}
	return count;
}
//Funcao para procurar uma matriz na vertical 
int procurarVertical (char matriz[MAX_LINHA][MAX_COLUNA],char palavara [MAX_PALAVRA], int m,int n){
	int i, j, count=0;
	for(i=0; i<=m -strlen(palavara);i++){
		for(j=0;j<n; j++){
			if(strncmp(matriz[i][j],palavra,strlen(palavra))==0){
			count++;
	    	}
	     }
    }
    return count;
}

int main() {
	int m,n;
	char matriz[MAX_LINHA][MAX_COLUNA];
	char palavra[MAX_PALAVRA];
	
	printf("Informe o numero de linhas da matriz:");
	scanf("%d",&m);
	printf("Informe o numero de colunas da matriz:");
	scantf("%d",&n);
	
	Criarmatriz(matriz,m,n);
	
	//Imprimir a matriz
	printf("Matriz inserida pelo usuario:\n");
	Imprimirmatriz(matriz,m,n);
	
	//Ler a palavra 
	printf("Informe a palavra que deseja procurar: ");
	scanf("%s", palavra);
	
	//Procurar a palavra na matriz na direcao horizontal
	int countHorizontal = procurarHorizontal(matriz, palavra, m, n);
	
	//Procurar a apalavra na matriz na direcao vertical
	int countVertical = procurarVertical( matriz, palavra,m,n);
	
	printf("A palavra '%s' aparece %d vezes na direcao horizontal e %d vezes na direcao vertical.\n, palavra, countHorinzontal, countVertical");
	return 0;
}
