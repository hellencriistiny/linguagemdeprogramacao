#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char LerString (int string[])
{
	printf("Digite a sua string: ");
	gets(string);
}
 char ExibirString (int string[])
 {

 	printf("A string digitada e: ");
 	for(i=0; string[i]!='\0';i++)
 	{
 		printf("%c",string[i]);
 		
	 }
 }
 


int main()
{
	int string[100]
}
