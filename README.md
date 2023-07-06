#include <stdio.h>
#include <stdlib.h>

struct lista
{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;
Lista* inicializa(void)
{
	return NULL;
}
Lista* insere(Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}
void imprime(Lista* l)
{
	Lista* p;/*variavel auxiliar para percorrer a a lista*/
	for(p=l; p!=NULL;p=p->prox)
	   printf("info=%d\n", p->info);
}
int main(void)
{
	Lista* l;
	l = inicializa();
	l = insere(l, 23);
	l = insere(l, 45);
	l = insere(l, 56);
	l = insere(l, 78);
	imprime(l);
}
