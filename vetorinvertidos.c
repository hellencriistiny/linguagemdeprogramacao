#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x[3][3], vetor[100];
	int t,f, aux,i;
	
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
	 
	 printf("Diagonal principal da matriz:\n");
	 for(f=0;f<3;f++)
	 {
	 	for(t=0;t<3;t++)
	 	{
	 		if(f==t)
	 		{
	 			vetor[f]= x[f][t];
			 }
		 }
		 printf("%d",vetor[f]);
		 printf("\n");
	 }
	 
	 printf("\nDiagonal secundaria da matriz:\n");
	 for(f=0;f<3;f++)
	 {
	 	for(t=0;t<3;t++)
	 	{
	 		if(f+t==2)
	 		{
	 			vetor[f]= x[f][t];
			 }
		 }
		 printf("%d",vetor[f]);
		 printf("\n");
	 }
	
	printf("\nVetor invertido:\n");
	 for(t =0;t<3;t++)
	 {
	 	for (f = t;f<3;f++)
	 	{
	 		if(vetor[t]> vetor[f])
	 		{
	 			aux = vetor[t];
	 			vetor[t] = vetor[f];
	 			vetor[f] = aux;
			 }
		 }
		 for(i=0;i<3;i++)
		 {
		 printf("%d",vetor[i]);	
		 }
	 }	
}
