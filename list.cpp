#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
typedef struct node item;
item *start=NULL;
void insert(item **q,int num1)
{
    int num;
    for(int i=0;i<num1;i++)
    {
    cin>>num;
    item *main,*res;
    main=*q;
    //cout<<"Enter data  "<<i;
    if(*q==NULL)
    {
    main=(item *)malloc(sizeof(item));
    main->data=num;
    main->next=NULL;
    *q=main;
    }
    else
    {
        while(main->next!=NULL)
            main=main->next;
        res=(item *)malloc(sizeof(item));
        res->data=num;
        res->next=NULL;
        main->next=res;
    }
    }

}
void display(item *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}
int main()
{
	int to;
	item *start;
	start=NULL;
	cin>>to;
	insert(&start,to);
	display(start);
}
