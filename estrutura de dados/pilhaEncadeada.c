/*implemente uma pilha que utilize strings de dois caracteres para representar as siglas de estados. a pilha deve ter no mínimo as três funções básicas: 
- push
- pop
- top
após as operações, exiba a mensagem: "o elemento no topo da pilha: xx".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list {
    char info[3];          // vetor para armazenar a sigla do estado (2 caracteres + terminador nulo)
    struct list* next;     // ponteiro para o próximo nó
} List;

typedef struct stack {
    List* top;             // ponteiro para o topo da stack
} Stack;

// prototipação das funções
Stack* stack_Create(void);
int stack_Empty(Stack* s);
void stack_Push(Stack* s, char* v);
char* stack_Pop(Stack* s);
char* stack_Top(Stack* s);
void stack_Free(Stack* s);

int main() {
    Stack* stack = stack_Create();

    stack_Push(stack, "MS");
    stack_Push(stack, "DF");
    stack_Push(stack, "RJ");
    stack_Push(stack, "PR");

    stack_Push(stack, stack_Pop(stack));
    stack_Push(stack, "SP");
    stack_Push(stack, stack_Top(stack));

    stack_Pop;
    stack_Pop;

    printf("O elemento no topo da pilha: %s\n", stack_Top(stack));

    return 0;
}

// cria uma pilha vazia
Stack* stack_Create(void) {
    Stack* s = (Stack*) malloc(sizeof(Stack));
    s->top = NULL;
    return s;
}

// verifica se a pilha está vazia
int stack_Empty(Stack* s) {
    return (s->top == NULL);
}

// insere valores na pilha
void stack_Push(Stack* s, char* v) {
    List* new_node = (List*) malloc(sizeof(List));
    strcpy(new_node->info, v);  
    new_node->next = s->top;    
    s->top = new_node;          
}

// remove valores da pilha
char* stack_Pop(Stack* s) {
    if (stack_Empty(s)) {
        printf("stack vazia.\n");
        exit(1);
    }
    List* t = s->top;
    char* v = (char*) malloc(sizeof(t->info)); 
    strcpy(v, t->info); 
    s->top = t->next;          
    free(t);                   
    return v; 
}

// retorna o valor do topo da pilha sem removê-lo
char* stack_Top(Stack* s) {
    if (stack_Empty(s)) {
        printf("stack vazia.\n");
        exit(1);
    }
    return s->top->info;       
}

// libera a memória da pilha
void stack_Free(Stack* s) {
    List* q = s->top;
    while (q != NULL) {
        List* t = q->next;
        free(q);
        q = t;
    }
    free(s);
}
