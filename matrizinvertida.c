#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x[3][3];
	int t,f;
	
	printf("Entre com os numeros da matriz:\n");
	
	for(t=0;t<3; t++)
	{
		for(f=0;f<3; f++)
		{
			scanf("%d", &x[t][f]);
			fflush(stdin);
		}
		
	}
     
     printf("\nExiba a matriz:\n");
     
     for(t=0;t<3;t++)
     {
     	for(f=0;f<3;f++)
     	{
     	  printf("%d ",x[t][f]);
		   	
		}
		printf("\n");
	 }
	 
	 printf("Matriz com posicao de linha trocada:\n");
	 
	 for(t=3-1; t>=0;t--)
	 {
	 	for (f=0;f<3;f++)
	 	{
	 		printf("%d ", x[t][f]);
		}
	 	 printf("\n");
	 }
	 
	 printf("Matriz com posicao da coluna trocada:\n");
	 
	 for(f=0;f<3;f++)
	 {
	 	for(t=3-1;t>=0;t--)
	 	{
	 	  printf("%d ", x[t][f]);
		}
		printf("\n");
	 }
	 
	 
	
	
	
	
	
	
	
}
