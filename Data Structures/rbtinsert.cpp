#include<iostream>
#include<cstdlib>
#define ischild(x,y)(x->left==y?x->left:x->right)
using namespace std;
struct node
{
       int info;char color;
       node *left,*right,*parent;
}*end,*root,*cur,*temp;
void pretrav(node *root)
{
     cout<<root->info<<" "<<root->color<<"\n";
     if(root->left!=end)
                         pretrav(root->left);
     if(root->right!=end)
                          pretrav(root->right);
}
void change1(node *cur)
{
     node *temp1=(cur)->left,*temp2=(cur)->left->right,*temp=cur;
     temp1->parent=temp->parent;
     if((cur)->parent==end)
                             {cout<<"hi";root=temp1;}
     else
                             ischild(temp->parent,temp)=temp1;
     temp->parent=temp1;
     temp1->right=temp;
     temp->left=temp2;
     if(temp2!=end)
     {
                    temp2->parent=temp;
     }
     cur=temp1;

}

void change2(node *cur)
{
     node *temp1=(cur)->right,*temp2=(cur)->right->left,*temp=cur;
     temp1->parent=temp->parent;
     if((cur)->parent==end)
                             root=temp1;
     else
                             ischild(temp->parent,temp)=temp1;
     temp->parent=temp1;
     temp1->left=temp;
     temp->right=temp2;
     if(temp2!=end)
     {
                    temp2->parent=temp;
     }
     cur=temp1;
}
void change(node *temp){
     node *z=temp;
     while(z->parent->color=='r')
     {
            if(z->parent==z->parent->parent->left)
            {
                     node *y=z->parent->parent->right;
                     if(y->color=='r')
                     {
                                      z->parent->color='b';
                                      y->color='b';
                                      z->parent->parent->color='r';
                                      z=z->parent->parent;
                     }
                     else
                     {node *ptr=z;
                          if(z==z->parent->right)
                          {
                                  change2(z->parent);
                                  z->color='b';
                                  z->parent->color='r';
                                  change1(z->parent);break;
                          }
                          else{
                               z->parent->color='b';
                               z->parent->parent->color='r';
                               change1(z->parent->parent);
                               break;
                               }

                     }
            }
            else
            {
                     node *y=z->parent->parent->left;
                     if(y->color=='r')
                     {
                                      z->parent->color='b';
                                      y->color='b';
                                      z->parent->parent->color='r';
                                      z=z->parent->parent;
                     }
                     else
                     {
                          if(z==z->parent->left)
                          {
                                  change1(z->parent);
                                  z->color='b';
                                  z->parent->color='r';
                                  change2(z->parent);
                                  break;
                          }
                          else{
                               z->parent->color='b';
                               z->parent->parent->color='r';
                               change2(z->parent->parent);
                               break;
                               }

                     }
            }
     }
     (root)->color='b';
}

void insert(node *temp){

     if(root==end){
                   root=temp;
                   }

     else{
          cur=root;
          while(1){
                   if(temp->info<cur->info){
                                            if(cur->left==end){
                                                               cur->left=temp;
                                                               temp->parent=cur;
                                                               break;
                                                               }
                                            else{
                                                 cur=cur->left;
                                                 }
                                            }
                   if(temp->info>=cur->info){
                                            if(cur->right==end){
                                                               cur->right=temp;
                                                               temp->parent=cur;
                                                               break;
                                                               }
                                            else{
                                                 cur=cur->right;
                                                 }
                                            }
                   }
          }change(temp);
     }




int main()
{
    int opt,x;
    end=(node*)malloc(sizeof(node));
    end->left=NULL;
    end->right=NULL;
    end->color='b';
    root=end;
    while(1)
    {
            cout<<"\n\nChoode your option : ";
            cout<<"\n1.Insert";
            cout<<"\n2.Pre-traversal Display";
            cout<<"\n3.Exit\n";
            cin>>opt;
            switch(opt)
            {
                       case 1 : cout<<"Enter the element : ";
                                cin>>x;
                                temp=(node*)malloc(sizeof(node));
                                temp->info=x;
                                temp->color='r';
                                temp->left=temp->right=temp->parent=end;
                                insert(temp);
                                break;
                       case 2 : pretrav(root);
                                break;
                       case 3 : exit(0);
            }
    }
}

