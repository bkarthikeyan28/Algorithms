#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
}*tobj;
struct node* createnode(int data1)
{
    struct node *temp=NULL;
    temp->data=data1;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void insert(struct node *root,int start,int size,int *A)
{
    int left=2*start+1;
    int right=2*start+2;
    if(root==NULL)
    {
        root=createnode(A[start]);
    }
    if(left>size||right>size)
        return;
    if(root->left==NULL&&root->right==NULL)
    {
        root->left=createnode(A[left]);
        root->right=createnode(A[right]);
    }
    insert(root->left,left,size,A);
    insert(root->right,right,size,A);

}
int main()
{
    int A[10]={0,1,2,3,4,5,6,7,8,9};
    struct node *root;
    insert(root,0,10,A);

}
