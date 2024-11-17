// implemente uma árvore binária utilizando os métodos pré-ordem, pós-ordem e em ordem para percorrê-la

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// um nó é composto por um valor e sua subárvore à direita e à esquerda

// criação da estrutura
struct treeNode {
    int value;
    struct treeNode* left; // estrutura da esquerda
    struct treeNode* right; // estrutura da direita
};

typedef struct treeNode node; // renomeando a struct, *parecido com o "import as"

// prototipção de funções
node* addNode(int value, node *l, node *r);
void PreOrder(node *root);
void inOrder(node *root);
void postOrder(node *root);
void freeTree(node *root);

int main(){
    setlocale(LC_ALL, "Portuguese");

    // criação de uma árvore com subárvores vazias
    node* root = addNode(29, addNode(2, NULL, NULL), addNode(2004, addNode (20, NULL, NULL), NULL)); 
    // os filhos de '29' são '2' e '2004', '2' não possui filhos e '2004' possui '20' à esquerda
    
    wprintf(L"pré-ordem: ");
    PreOrder(root);
    printf("\n");
    wprintf(L"em ordem: ");
    inOrder(root);
    printf("\n");
    wprintf(L"pós ordem ");
    postOrder(root);

    freeTree(root); 

    return 0;
}

// cria a árvore
node* addNode(int value, node *l, node *r){
    node* root = (node*)malloc(sizeof(node));
    if (root==NULL){
        exit(1);
    } else{
        root->value = value;
        root->left = l;
        root->right = r;
    }
    return root;
}

// percorre a raíz, toda a subárvore da esquerda e depois da direita
void PreOrder(node *root){
    if (root == NULL) return;
    printf("%d ", root->value);
    PreOrder(root->left);
    PreOrder(root->right);
}

// percorre a subárvore da esquerda, raíz e depois a subárvore da direita
void inOrder(node *root){
    if(root != NULL){
        inOrder(root->left);
        printf("%i ", root-> value);
        inOrder(root->right);
    }
}

// percorre a subárvore da esquerda, direita e depois a raíz
void postOrder(node *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%i ", root->value);
    }
}

// libera memória alocada para árvore
void freeTree(node *root){
    if(root != NULL){
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}
// created by nathalia 28/10/2024