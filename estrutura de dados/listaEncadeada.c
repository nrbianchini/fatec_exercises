/*implemente um programa em para manipular uma lista encadeada ordenada de números inteiros gerados aleatoriamente. o programa deve executar automaticamente, sem interação do usuário, as operações essenciais:
- criar lista
- inserir elemento
- pesquisar elemento
- remover elemento
- verificar se está vazia
- imprimir lista
- destruir elemento/lista
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node {
    int data; 
    struct Node* next; // ponteiro para o próximo nó
} Node;

 typedef struct {
    Node* head; // ponteiro para o primeiro nó
} List;

// prototipação das funções
List* lst_Create(void); 
List* lst_Add(List* l, int i); 
Node* lst_Search(List* l, int v); 
List* lst_Remove(List* l, int v);
int lst_Empty(List* l); 
void lst_Print(List* l); 
void lst_Free(List* l); 

int main() {
    srand(time(NULL));  

    List* list = lst_Create();  
    int nums[10]; // array para armazenar números gerados

    // geração de dez números aleatórios entre 10 e 99    
    for(int i = 0; i < 10; i++) {
        int num = rand() % 90 + 10;  
        nums[i] = num; // armazena no array
        list = lst_Add(list, num); // adiciona os números à lista
    }
    
    lst_Print(list);  

    list = lst_Add(list, 30);
    list = lst_Add(list, 13);
    list = lst_Add(list, 29);
    list = lst_Add(list, 13);

    lst_Print(list); 

    lst_Search(list, 13);

    lst_Remove(list, 29);

    // remove cinco números aleatórios da lista
    for(int i = 0; i < 3; i++) {
        int index_to_remove = rand() % 14; // seleciona um índice aleatório do array
        int num_to_remove = nums[index_to_remove];  
        printf("\nremover %d\n", num_to_remove);
        list = lst_Remove(list, num_to_remove); // remove o número da lista
        lst_Print(list); // imprime a lista após a remoção
        nums[index_to_remove] = -1;  
    }

    //lst_Empty(list);

    lst_Free(list);  

    return 0;
}

// cria uma lista vazia
List* lst_Create(void) {
    List* l = (List*) malloc(sizeof(List));
    l->head = NULL;
    return l;
}

// insere elemento ordenadamente
List* lst_Add(List* l, int i) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->data = i;
    
    // se a lista está vazia ou o novo elemento é menor que o primeiro, insere no início
    if (l->head == NULL || l->head->data >= i) {
        new_node->next = l->head;
        l->head = new_node;
    } else {
        // percorre a lista até encontrar a posição correta para inserção
        Node* current = l->head;
        while (current->next != NULL && current->next->data < i) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
    
    return l;
}

// busca elemento
Node* lst_Search(List* l, int v) {
    Node* p = l->head;
    while(p != NULL) {
        if (p->data == v)
            return p;
        p = p->next;
    }
    return NULL;
}

// remove elemento
List* lst_Remove(List* l, int v) {
    Node* prev = NULL;
    Node* p = l->head;

    while(p != NULL && p->data != v) {
        prev = p;
        p = p->next;
    }

    if (p == NULL)
        return l;  

    if (prev == NULL) {
        l->head = p->next;  
    } else {
        prev->next = p->next;  
    }
    free(p);
    return l;
}

// verifica se a lista está vazia
int lst_Empty(List* l) {
    return (l->head == NULL);
}

// imprime a lista
void lst_Print(List* l) {
    Node* p = l->head;
    printf("\nlista: ");
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// libera a memória da lista
void lst_Free(List* l) {
    Node* p = l->head;
    while (p != NULL) {
        Node* t = p->next;
        free(p);
        p = t;
    }
    free(l);  
}
