#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<string.h>
using namespace std;
struct node
{
	char key;
	struct node *left;
	struct node *right;
};
struct node* createNode(char x)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->key=x;
	temp->left=NULL;
	temp->right=NULL;
}
int search(char in[],int instart,int inend,char x)
{
	for(int i=instart;i<=inend;i++)
	{
		if(in[i]==x)
			return i;
	}
}
struct node* Build(char pre[],char in[],int instart,int inend)
{
	static int preindex=0;
	if(instart>inend)
        return NULL;
	struct node *temp=createNode(pre[preindex++]);
	if(instart==inend)
		return temp;
	int inIndex=search(in,instart,inend,temp->key);
	temp->left=Build(pre,in,instart,inIndex-1);
	temp->right=Build(pre,in,inIndex+1,inend);
	return temp;
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
void printInorder(struct node* node)
{
  if (node == NULL)
     return;

  /* first recur on left child */
  printInorder(node->left);

  /* then print the data of node */
  printf("%c ", node->key);

  /* now recur on right child */
  printInorder(node->right);
}
int main()
{
	int n;
	char A[n],B[n];
	cin>>n;
	for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n;i++)
        cin>>B[i];
	struct node *root=Build(A,B,0,n-1);
	preOrder(root,0);
}
