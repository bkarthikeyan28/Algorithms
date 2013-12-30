#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
}*root1,*root;
int n;
char A[100];
node* maketree(int index)
{
    node *root=new node;
    if(index<n)
    {
        root->data=A[index];
        root->left=maketree(2*index+1);
        root->right=maketree(2*index+2);
    }
    else
    {
        root->
    }
}
void print(node *tmp)
{
    print(tmp->left);
    cout<<tmp->data;
    print(tmp->right);

}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    maketree(0);
    //print(root);
    cout<<root->data;
}
