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

// Função para eliminar os elementos pares da lista encadeada
void removeEvenNumbers(Node** head) {
    Node* current = *head;
    Node* prev = NULL;

    while (current != NULL) {
        if (current->data % 2 == 0) {
            if (prev == NULL) {
                *head = current->next;
            } else {
                prev->next = current->next;
            }
            Node* temp = current;
            current = current->next;
            free(temp);
        } else {
            prev = current;
            current = current->next;
        }
    }
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
    Node* head = NULL;
    addNode(&head, 1);
    addNode(&head, 2);
    addNode(&head, 3);
    addNode(&head, 4);
    addNode(&head, 5);
    addNode(&head, 6);

    printf("Lista original: ");
    printList(head);

    removeEvenNumbers(&head);

    printf("Lista sem os elementos pares: ");
    printList(head);

    return 0;
}
Neste programa, a estrutura Node representa cada nó da lista encadeada, contendo um campo de dados (data) e um ponteiro para o próximo nó (next). A função createNode é usada para criar um novo nó com o dado fornecido. A função addNode adiciona um novo nó no final da lista.

A função removeEvenNumbers percorre a lista encadeada e remove os elementos pares. Se o elemento atual for par, ele é removido e o ponteiro next do nó anterior é ajustado para pular o nó atual. A função printList é usada para imprimir os elementos da lista encadeada.

Na função principal (main), alguns nós são adicionados à lista, e em seguida, a lista original é impressa. Em seguida, a função removeEvenNumbers é chamada para eliminar os elementos pares, e a lista resultante é impressa novamente.

Espero que isso ajude!






