#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int matriz[3][3];
	int r,u;
	
	printf("Entre com os numeros da matriz:\n");
	
	for(r=0;r<3;r++)
	{
		for (u=0;u<3;u++)
		{
			scanf("%d",&matriz[r][u]);
			fflush(stdin);
		}
	}
	
	printf("\nExiba a Matriz:\n");
	
	for(r=0;r<3;r++)
	{
		for (u=0;u<3;u++)
		{
			printf("%d ",matriz[r][u]);
			
		}
		printf("\n");
	}
	
	printf("Matriz com posicao de linha trocada:\n");
	
	for(r=3-1;r>=0;r--)
	{
		for(u=0;u<3;u++)
		{
			printf("%d ", matriz[r][u]);
		}
		printf("\n");
	}
	
	printf("Matriz com posicao de coluna trocada:\n");
	for(u=0;u<3;u++)
	{
		for(r=3-1;r>=0;r--)
		{
			printf("%d ", matriz[u][r]);
		}
		printf("\n");
	}
	
	printf("Matriz transposta( linha virando coluna ):\n");
	for(u=0;u<3;u++)
	{
	   for(r=3-1; r>=0;r--)
    	{
	      printf("%d ", matriz[r][u]);
        }
    printf("\n");
    }
	
}
