#include <stdio.h>
#include <string.h>

int main()
{

  char B[100];
  int  t,g;
  
  
  
  printf("Qual a sua string?\n");
  scanf("%s", B);
  printf("%s",B);
  t=strlen(B);
  printf("%d", t);
 
  for (g=t-1;g>=0;g--)
   printf("%c",B[g]);
   
  
  
   
   

}
