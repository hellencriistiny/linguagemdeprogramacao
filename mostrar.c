#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int matriz[5][5], vetor[100];
	int t,f, aux,i;
	
	printf("Entre com os numeros da matriz:\n");
	
	for(t=0;t<5; t++)
	{
		for(f=0;f<5; f++)
		{
			printf("[%d][%d]",matriz[t][f]);
			scanf("%d", &matriz[t][f]);
			fflush(stdin);
		}
		
	}
     
     printf("\nEmatriziba a matriz:\n");
     
     for(t=0;t<5;t++)
     {
     	for(f=0;f<5;f++)
     	{
     	  printf("%d ",matriz[t][f]);
		   	
		}
		printf("\n");
	 }
	 
	 printf("Matriz com posicao de linha trocada:\n");
	 
	 for(t=5-1; t>=0;t--)
	 {
	 	for (f=0;f<5;f++)
	 	{
	 		printf("%d ", matriz[t][f]);
		}
	 	 printf("\n");
	 }
	 
	 printf("Matriz com posicao da coluna trocada:\n");
	 
	 for(f=0;f<5;f++)
	 {
	 	for(t=5-1;t>=0;t--)
	 	{
	 	  printf("%d ", matriz[t][f]);
		}
		printf("\n");
	 }
	 
	 printf("Diagonal principal da matriz:\n");
	 for(f=0;f<5;f++)
	 {
	 	for(t=0;t<5;t++)
	 	{
	 		if(f==t)
	 		{
	 			vetor[f]= matriz[f][t];
			 }
		 }
		 printf("%d",vetor[f]);
		 printf("\n");
	 }
	 
	 printf("\nDiagonal secundaria da matriz:\n");
	 for(f=0;f<5;f++)
	 {
	 	for(t=0;t<5;t++)
	 	{
	 		if(f+t==2)
	 		{
	 			vetor[f]= matriz[f][t];
			 }
		 }
		 printf("%d",vetor[f]);
		 printf("\n");
	 }
	
	printf("\nVetor invertido:\n");
	 /*for(t =0;t<5;t++)
	 {
	 	for (f = t;f<5;f++)
	 	{
	 		if(vetor[t]> vetor[f])
	 		{
	 			aux = vetor[t];
	 			vetor[t] = vetor[f];
	 			vetor[f] = aux;
			 }
		 }
		 for(i=0;i<5;i++)
		 {
		 printf("%d",vetor[i]);	
		 }
	 }*/
	 
	 for(t=0;t<5;t++)
	 {
	 	for(f=t+1;f<5;f++)
	 	{
	 		if(vetor[t] > vetor[f])
	 		{
	 			aux = vetor[f];
	 			vetor[f] = vetor[t];
	 			vetor [t] = aux;
			 }
		 }
		 for(t=0;t<5;t++)
		 printf("%d", vetor[t]);
		 printf("\n");
	 }
	 	
}
