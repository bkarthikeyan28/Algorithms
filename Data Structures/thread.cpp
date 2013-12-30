#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;
struct node
{
	int key;
	node *left;
	node *right;
	int thread;
};
struct node* createNode(int key)
{
	struct node *node=(struct node*)malloc(sizeof (struct node));
	node->key=key;
	node->left=NULL;
	node->right=NULL;
	return node;
}
struct node* insert(struct node *node,int key)
{
	if(node==NULL)
		return createNode(key);
	if(key<node->key)
		node->left=insert(node->left,key);
	if(key>node->key)
		node->right=insert(node->right,key);
	return node;
}
struct node *C[100];
int count=0;
void inorderarray(struct node *root)
{
	if(root!=NULL)
	{
		inorderarray(root->left);
		C[count++]=root;
		inorderarray(root->right);
	}
}
struct node* returnsucc(struct node* root)
{
	for(int i=0;i<count;i++)
	{
		if(C[i]==root->data)
			return C[i+1];
	}
}
void thread(struct node *root)
{
	for(int i=0;i<count;i++)
	{
		
	}

}