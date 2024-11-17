/*desenvolva um programa que simule o funcionamento de uma fila. o programa deve implementar as seguintes funções:
- criar e inicializar uma fila vazia.
- adicionar um elemento ao final da fila.
- verificar se a fila está vazia.
- imprimir os elementos da fila.
- exibir o próximo elemento da fila (o primeiro).
- remover e retornar o próximo elemento da fila.
- liberar a memória utilizada pela fila.
- a fila deve ser populada com números aleatórios gerados entre 10 e 99.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

struct list{
    int info;
    struct list* next;
};
typedef struct list List;

struct queue{
    List* first;
    List* last;
};
typedef struct queue Queue;

Queue* queue_Create ();
void queue_Add (Queue* PtDF, int value);
int queue_Empty (Queue* PtDF);
void queue_Print (Queue* q);
int queue_View (Queue* PtDF);
int queue_Pop (Queue* PtDF);
void queue_Free (Queue* PtDF);

int random_int(int min, int max){
    return min + (rand() % max);
}

int main(){
    const int MIN = 10, MAX = 99;
    srand(time(NULL));
    printf("\tFILA:\n");

    setlocale(LC_ALL, "Portuguese");

    Queue* q = queue_Create();

    queue_Print(q);

    queue_Add(q, random_int(MIN, MAX));
    queue_Add(q, random_int(MIN, MAX));
    queue_Add(q, random_int(MIN, MAX));
    queue_Add(q, random_int(MIN, MAX));
    queue_Add(q, random_int(MIN, MAX));
    queue_Add(q, random_int(MIN, MAX));

    queue_Print(q);

    wprintf(L"O próximo da fila é: %d\n", queue_View(q));
    wprintf(L"Chamando o próximo da fila: %d\n", queue_Pop(q));
    wprintf(L"Chamando o próximo da fila: %d\n", queue_Pop(q));
    wprintf(L"Chamando o próximo da fila: %d\n", queue_Pop(q));  
    printf("\nFila atualizada: ");
    queue_Print(q);

    queue_Free(q);  
}

Queue* queue_Create(){
    Queue* PtDF = (Queue*) malloc(sizeof(Queue));
    PtDF->first = NULL;
    PtDF->last = NULL;
    return PtDF;
}

void queue_Add (Queue* q, int i){
    List* new = (List*) malloc(sizeof(List));
    new->info = i;
    new->next = NULL;

    if(q->last == NULL){
        q->last = new;
        q->first = new;
    } else {
        q->last->next = new;
        q->last = new;
    }
}

int queue_Empty (Queue* q){
    return(q->last == NULL);
}

void queue_Print (Queue* q){
    if(queue_Empty(q)){
        printf("\nFila vazia!\n");
        return;
    }
    List* p;
    printf("\n");
    for(p = q->first; p != NULL; p = p->next){
    printf("%d ", p->info);
    }
    printf("\n");
    }

int queue_View (Queue* q){
    return q->first->info;
}

int queue_Pop (Queue* q){
    if(!queue_Empty(q)){
        List* first = q->first;
        if (first->next == NULL){
            q->first = NULL;
            q->last = NULL;
        } else {
            q->first = q->first->next;
        }
        int info = first->info;
        free(first);
        return info;
    }
    return (int) NULL;
}

void queue_Free (Queue* q){
    while(!queue_Empty(q)){
        queue_Pop(q);
    }
    free(q);
}