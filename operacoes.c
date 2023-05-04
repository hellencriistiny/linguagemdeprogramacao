#include <stdio.h> 



int main() 
{
	
	int A, B, soma, sub, mult, divis;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	sub = A - B;
	mult = A * B;
	divis = A /B;
	
	printf("Resultados: \n");
	printf("soma: %d.\n",soma);
	printf("sub: %d.\n",sub);
	printf("mult: %d.\n",mult);
	printf("divis: %d.\n",divis);
		
	return 0;
}
