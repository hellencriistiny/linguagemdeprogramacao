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
/*void imprime(Lista* l)
{
	Lista* p;/*variavel auxiliar para percorrer a a lista
	for(p=l; p!=NULL;p=p->prox)
	   printf("info=%d\n", p->info);
}*/

// Função para adicionar um novo nó no final da lista
void addNode(Lista** l, int v) {
    Lista* newLista = createLista(v);
    if (*l == NULL) {
        *l = newLista;
    } else {
        Lista* p = *l;
        while (p->info != NULL) {
            p = p->info;
        }
        p->info = newLista;
    }
}

// Função para eliminar os elementos pares da lista encadeada
void removeEvenNumbers(Lista** l, int v) {
    Lista* ant = *l;
    Lista* prox = NULL;
    while (ant != NULL) {
        if (ant-> v % 2 == 0) {
            if (prox == NULL) {
                *l = ant->info;
            } else {
                prox->info = ant->info;
            }
            Lista* p = ant;
            ant = ant->info;
            free(p);
        } else {
            prox = ant;
            ant = ant->info;
        }
    }
}

// Função para imprimir a lista encadeada
void printList(Lista* l) {
    Lista* p = l;
    while (p != NULL) {
        printf("%d ", p->v);
        p = p->info;
    }
    printf("\n");
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
