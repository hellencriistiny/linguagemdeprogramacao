#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int entrada(int vetor[], int h)
 {
 	printf("Entre com os numeros dos vetores:\n");
 	
 	for(int i=0;i<h;i++)
 	   {
 	   	scanf("%d", &vetor[i]);
		}
 }
 
 void exibir(int vetor[], int h)
 {
 	for(int i=0;i<h;i++)
 	{
 	   	printf("%d ", vetor[i]);
 	}
 }
 int MaiorValor(int vetor[], int h)
 {
 	int maior;
 	for (int i=0;i<h;i++)
 	{
 		if(maior<vetor[i])
 		{
 			maior =vetor[i];
		 }
	 }
	 return maior;
 }
 int MenorValor(int vetor[], int h)
 {
 	int menor;
 	for (int i=0;i<h;i++)
 	{
 		if(menor>vetor[i])
 		{
 			menor =vetor[i];
		 }
	 }
	 return menor;
 }
 int main() 
{
	int TamVetor=5, maior, menor;
	int vetor[TamVetor];
	entrada (vetor,TamVetor);
	exibir (vetor, TamVetor);
	maior = MaiorValor (vetor, TamVetor);
	menor = MenorValor (vetor, TamVetor);
	
	
	printf("\nMaior valor do vetor: %d", maior);
	printf("\nMenor valor do vetor: %d", menor);
	
	
}
