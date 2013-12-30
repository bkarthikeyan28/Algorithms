#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;
struct node
{
	int key;
	node *left;
	node *right;
	int height;
};
struct node* newnode(int key)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->key=key;
	node->left=NULL;
	node->right=NULL;
	node->height=1;
	return node;
}
int height(struct node *n)
{
	if(n==NULL)
		return 0;
	return n->height;
}
int getBalance(struct node *n)
{
	if(n==NULL)
		return 0;
    return height(n->left)-height(n->right);
}
struct node* rightRotate(struct node *n)
{
	struct node *temp1=n->left;
	struct node *temp2=temp1->right;
	temp1->right=n;
	n->left=temp2;
	temp1->height=max(height(temp1->left),height(temp1->right))+1;
	n->height=max(height(n->left),height(n->right))+1;
	return temp1;
}
struct node* leftRotate(struct node *n)
{
	struct node *temp1=n->right;
	struct node *temp2=temp1->left;
	temp1->left=n;
	n->right=temp2;
	temp1->height=max(height(temp1->left),height(temp1->right))+1;
	n->height=max(height(n->left),height(n->right))+1;
	return temp1;
}
struct node* insert(struct node *node,int key)
{
	if(node==NULL)
		return newnode(key);
	if(key<node->key)
		node->left=insert(node->left,key);
	if(key>node->key)
		node->right=insert(node->right,key);
	node->height=max(height(node->left),height(node->right))+1;
	int balance=getBalance(node);
	if(balance>1&&key<node->left->key)
		return rightRotate(node);
	if(balance>1&&key>node->left->key)
	{
		node->left=leftRotate(node->left);
		return rightRotate(node);
	}
	if(balance<-1&&key>node->right->key)
	{
		return leftRotate(node);
	}
	if(balance<-1&&key<node->right->key)
	{
		node->right=rightRotate(node->right);
		return leftRotate(node);
	}
	return node;
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
  struct node *root = NULL;
  root = insert(root, 10);
  //preOrder(root);
  root = insert(root, 20);
  //preOrder(root);
  root = insert(root, 30);
  //preOrder(root);
  root = insert(root, 40);
  //preOrder(root);
  root = insert(root, 50);
  //preOrder(root);
  root = insert(root, 25);
  //preOrder(root);

  /* The constructed AVL Tree would be
            30
           /  \
         20   40
        /  \     \
       10  25    50
  */

  cout<<"Pre order traversal of the constructed AVL tree is "<<endl;
  preOrder(root,0);
  //displayTree(root,5);

  return 0;
}
