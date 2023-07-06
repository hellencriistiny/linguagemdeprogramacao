#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do nó da lista encadeada
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Função para criar um novo nó
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Função para adicionar um novo nó no final da lista
void addNode(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Função para juntar duas listas encadeadas
void joinLists(Node** list1, Node** list2) {
    if (*list1 == NULL) {
        *list1 = *list2;
    } else {
        Node* temp = *list1;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = *list2;
    }
    *list2 = NULL;
}

// Função para imprimir a lista encadeada
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Função principal
int main() {
    Node* list1 = NULL;
    Node* list2 = NULL;

    // Adicionando elementos na primeira lista
    addNode(&list1, 1);
    addNode(&list1, 2);
    addNode(&list1, 3);

    // Adicionando elementos na segunda lista
    addNode(&list2, 4);
    addNode(&list2, 5);
    addNode(&list2, 6);

    printf("Lista 1: ");
    printList(list1);

    printf("Lista 2: ");
    printList(list2);

    joinLists(&list1, &list2);

    printf("Lista resultante após a junção: ");
    printList(list1);

    return 0;
}
Neste programa, a estrutura Node representa cada nó da lista encadeada, contendo um campo de dados (data) e um ponteiro para o próximo nó (next). A função createNode é usada para criar um novo nó com o dado fornecido. A função addNode adiciona um novo nó no final da lista.

A função joinLists recebe dois ponteiros para listas encadeadas (list1 e list2). Ela percorre a primeira lista até o último nó e faz com que o ponteiro next desse nó aponte para a primeira posição da segunda lista (list2). Em seguida, o ponteiro list2 é definido como NULL para indicar que a segunda lista foi juntada à primeira.

A função printList é usada para imprimir os elementos da lista encadeada.

Na função principal (main), são criadas duas listas encadeadas (list1 e list2) e


