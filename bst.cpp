#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
    struct node* root=NULL;

struct node* createnode(int data1)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data1;
    newnode->left=NULL;
    newnode->right=NULL;
    return(newnode);
}
int hei(struct node* temp)
{
    if(temp==NULL)
        return 0;
    else
    {
    int ldepth=hei(temp->left);
    int rdepth=hei(temp->right);
    if(ldepth>rdepth)
        return (ldepth+1);
    else return (rdepth+1);
    }
}
struct node* insert(struct node **T,int data1)
{
   if(*T==NULL)
        *T=createnode(data1);
    else if(data1<(*T)->data)
        insert(&(*T)->left,data1);
    else if(data1>(*T)->data)
        insert(&(*T)->right,data1);
}
void padding ( char ch, int n )
{
  int i;

  for ( i = 0; i < n; i++ )
    putchar ( ch );
}

void structure ( struct node *root, int level )
{
  int i;

  if ( root == NULL ) {
    padding ( '\t', level );
    puts ( "~" );
  }
  else {
    structure ( root->right, level + 1 );
    padding ( '\t', level );
    printf ( "%d\n", root->data );
    structure ( root->left, level + 1 );
  }
}
void display(struct node *temp)
{
    if(temp->left!=NULL)
        display(temp->left);
    cout<<temp->data<<" ";
    if(temp->right!=NULL)
        display(temp->right);
}
int size=1;
int A[100];
void dis(struct node *temp,int level)
{
    if(temp==NULL)
    {
        A[size++]=0;return;
    }
    else if(level==0)
    {
        A[size++]=temp->data;
    }
    else
    {
        dis(temp->left,level-1);
        dis(temp->right,level-1);
    }
}
int main()
{
    int count=0;
    insert(&root,5);
    insert(&root,4);
    insert(&root,7);
    insert(&root,0);
    insert(&root,10);
    //insert(&root,);
    //insert(&root,45);
    //insert(&root,56);
    //insert(&root,12);
   // int height=hei(root);
    //cout<<height<<endl;
    //display(root);
    //int m;
    //for(int i=0;i<height;i++)
    //{
      //  dis(root,i);
    //}
    //for(int i=1;i<size;i++)
      //  cout<<A[i];
    //cout<<size<<endl;
    structure(root,0);

}

