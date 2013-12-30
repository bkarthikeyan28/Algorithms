#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
typedef struct node item;
item *start=NULL,*start1=NULL,*temp1,*temp2;
void insert()
{
    temp1=new node;
    cout<<"Enter data you want to insert ";
    cin>>temp1->data;
    if(start==NULL)
    {
        start=temp1;
        start->next=NULL;
    }
    else
    {
        temp1->next=start;
        start=temp1;
    }
}
void display()
{
    start1=start;
    int temp2;
    while(start1!=NULL)
    {
        temp2=start1->data;
        cout<<temp2<<endl;
        start1=start1->next;
    }
}
void deletenode()
{
    int index;
    cin>>index;
    start1=start;
    for(int i=1;i<=index;i++)
    {
       temp2=start1->next;
       start1=start1->next;
    }
    start1=start;
    for(int i=1;i<=index-2;i++)
    {
        if(i==index-2)
            start1->next=temp2;
        else
            start1=start1->next;
    }
    start=start1;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
        insert();
    display();
    deletenode();
    display();
}

