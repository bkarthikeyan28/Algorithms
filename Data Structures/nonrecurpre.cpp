#include<iostream>
using namespace std;
struct node
{
	int key;
	struct node *right;
	struct node *left;
};
struct node *A[100];
int top=-1;
void push(struct node *temp)
{
	A[++top]=temp;
}
struct node* pop()
{
	return A[top--];
}
strcut node* createNode(int key)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->key=key;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct node* insert(struct node *root,int key)
{
	if(root==NULL)
		return createNode(key);
	else if(key<root->data)
		root->left=insert(root->left,key);
	else if(key>root->data)
		root->right=insert(root->right,key);
	return root;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		root=insert(root,x);
	}
	while(1)
	{
		while(root)
		{
			cout<<root->key;
			push(root);
			root=root->left;

		}
	}
}
