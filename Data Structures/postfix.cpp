#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
			char item;
			struct node* leftChild;
			struct node* rightChild;
			};

typedef struct node node;
static node* stack[25];
static int stackPtr = -1;
node *root;
node* pop(void)
{
	return(stack[stackPtr--]);
}
void push(node* root)
{
	stack[++stackPtr] = root;
}
void operato(char optr)
{
    root = (node*)malloc(sizeof(node));
	root->item = optr;
	root->rightChild = pop();
	root->leftChild = pop();
	push(root);
}
void operand(char opnd)
{
    root = (node*)malloc(sizeof(node));
	root->item = opnd;
	root->rightChild = NULL;
	root->leftChild = NULL;
	push(root);
}
void PostTraverse (node* root)
{
	if (root->leftChild != NULL) {
		PostTraverse (root->leftChild);
    }
	if (root->rightChild != NULL) {
		PostTraverse (root->rightChild);
    }
	printf("%c ", root->item);
}
int main (void)
{
    node* root;
    char A[100];
    char token;
    int i = 0;
    token = strtok(postfix, " ");
    while (token != NULL) {
        if(token !='('&& token !=')'&& token !='^'&& token !='*'&&
token !='/'&& token !='+'&& token !='-')
        {
         operand(token);
        } else {
               operato(token);
        }
        token = strtok(NULL, " ");
    }
    PostTraverse(stack);
    printf("\n");
    system("pause");
    return 0;
}
