#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;
struct node
{
	int key;
	node *left;
	node *right;
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
struct node* findMinRight(struct node* node)
{
	struct node* current = node;

    /* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;

    return current;
}
struct node* findMaxLeft(struct node* node)
{
	struct node* current = node;
    while (current->right != NULL)
        current = current->right;

    return current;
}
struct node* delete1(struct node *root,int key)
{
	if(root==NULL)
		return root;
	else if(key<root->key)
		root->left=delete1(root->left,key);
	else if(key>root->key)
		root->right=delete1(root->right,key);
	else
	{
		if(root->left&&root->right)
		{
			struct node *temp=findMaxLeft(root->left);
			root->key=temp->key;
			root->left=delete1(root->left,root->key);
		}
		else
		{
            struct node *temp;
            temp=root;
			if(root->left==NULL)
				root=root->right;
			else if(root->right==NULL)
				root=root->left;
			free(temp);
		}
	}
	return root;
}
void preOrder(struct node* root,int indent)
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
	struct node* root=NULL;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
        cin>>x;
        root=insert(root,x);
    }
    preOrder(root,1);
	for(int i=0;i<5;i++)
	{
        cin>>x;
        root=delete1(root,x);
        preOrder(root,1);
    }


}