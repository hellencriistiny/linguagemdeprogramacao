#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int info;
    struct lista *prox;
};
typedef struct lista Lista;
/*funcao de inicializacao: retorna uma lista vazia*/
Lista* inicializa(void)
{
	return NULL;
}

/*insercao no inicio: retorne a lista atualizada*/
Lista* insere(Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}

/*funcao imprime: imprim valores dos elementos*/
void imprime(Lista* l)
{
	Lista* p;/*variavel auxiliar para percorrer a a lista*/
	for(p=l; p!=NULL;p=p->prox)
	   printf("info=%d\n", p->info);
}
/*funcao vazia retorne 1 se vazia ou 0 se nao vazia*/
int vazia(Lista*l)
{
	if(l==NULL)
	     return 1;
	else 
	    return 0;
}

/*funcao busca: busca um elemento na lista*/
Lista* busca(Lista* l, int v)
{
	Lista* p;
	for(p=l;p!=NULL; p->prox)
	     if(p->info==v)
	       return p;
	return NULL;/*nao achou o elemento*/
}
/*funcao retira: retira elemento da lista*/
Lista* retira(Lista* l, int v)
{
	Lista* ant = NULL;/*ponteiro para elemento anterior*/
	Lista* p = l;/*ponteiro para percorrer a lista*/
	/*procura elemento na lista, guardando anterior*/
	while(p !=NULL && p->info != v)
	{
		ant = p;p=p->prox; }/*verifica se achou elemento*/
		if(p==NULL)
		  return l; /*nao achou: retorna lista original*/
		/*retira elemento*/
		if(ant==NULL)
		{
			/*retira elemento do inicio*/
			l = p ->prox;
		}
		else
		{
			/*retira elemento do meio da lista*/
			ant->prox = p->prox;
		}
		free(p);
		return l;
	}
void libera (Lista* l)
{
	Lista* p =l;
	while (p !=NULL)
	{
		Lista* t=p->prox; /*guarda referencia para o proximo elemento*/
		free(p);/*libera a memoria apontada por p*/
		p = t;/*faz p apontar para o proximo*/
	}
	
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
	l = retira(l, 78);
	imprime(l);
	l =retira (l, 45);
	imprime(l);
	libera(l);
	return 0;
}
