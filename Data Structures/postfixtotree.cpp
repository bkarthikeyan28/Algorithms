#include<iostream>
#include<string.h>
#include<stack>
#include<cstdlib>
#include<stdio.h>
using namespace std;
struct node
{
	char key;
	struct node *left;
	struct node *right;
};
struct node *A[100];
int top=-1;
struct node *root=NULL;
struct node* createNode(char x)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->key=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void push(struct node* temp)
{
    A[++top]=temp;
}
struct node* pop()
{
    return A[top--];
}
void preOrder(struct node *root,int indent)
{
    if(root==NULL)
    {
        for(int i=0;i<indent;i++)
            cout<<"\t";
        puts("~");
    }
    else
    {
        preOrder(root->right,indent+1);
        for(int i=0;i<indent;i++)
            cout<<"\t";
        cout<<root->key<<endl;
        preOrder(root->left,indent+1);
    }
}
int main()
{
	char B[100];
	cin>>B;
	for(int i=0;i<strlen(B);i++)
	{
		if(B[i]=='+'||B[i]=='-')
		{
            struct node *temp=createNode(B[i]);
            temp->left=pop();
            temp->right=pop();
            push(temp);
		}
		else
		{
            struct node *temp=createNode(B[i]);
            push(temp);
		}
	}
	root=A[top];
	preOrder(root,0);
}
