#include <stdio.h>
#include <stdlib.h>

int main()
{


   int tam,i;
   char string[100];
   char vetor[100];
   
   
   printf("Qual a sua string?\n");
   gets(string);
   
   for(i=0;string[i]!='\0';i++)
   {
   	
	   vetor[i]=string[i];
   	
   }
   
   for(i;i>=0;i--)
   {
   	 printf("%c", vetor[i]);
   }
 return 0;  
}
