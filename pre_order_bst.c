#include <stdio.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *left;
    struct node *right;
};
struct node *createnode(char data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
void preorder(struct node *root)
{
    if (root == NULL)
        return;
    printf("%c ", root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node*root)
{
   
}

int main()
{
    struct node *A = createnode('A');
    struct node *B = createnode('B');
    struct node *C = createnode('C');
    struct node *D = createnode('D');
    struct node *E = createnode('E');
    struct node *F = createnode('F');
    struct node *G = createnode('G');
    struct node *H = createnode('H');
    struct node *I = createnode('I');
    struct node*J=createnode('J');




    A->left=B;
    B->left=D;
    B->right=E;
    E->right=F;
    A->right=C;
    C->left=F;
    F->left=I;
    C->right=G;
    G->left=J;
    preorder(A);


    printf("\n");
    inorder(A);
    printf("\n");
    postorder(A);
    printf("\n");




}