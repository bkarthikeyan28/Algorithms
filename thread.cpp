#include<stdio.h>
#include<cstdlib>

struct node
{
	int info;
	struct node *right,*left;
	int rthread;
};
typedef struct node *NPTR;

NPTR getnode()
{	return (NPTR)malloc(sizeof(struct node));	}

NPTR insertnode(NPTR root,NPTR p, NPTR rt)
{
	if(root==NULL)
	{
		root=p;
		if(rt!=NULL)
		{
			root->right=rt;
			root->rthread=1;
		}
	}
	else if(p->info<root->info)
		root->left=insertnode(root->left,p,root);
	     else
		if(root->rthread==1)
		{
			root->right=insertnode(NULL,p,rt);
			root->rthread=0;
		}
		else
		root->right=insertnode(root->right,p,rt);
	return root;
}

NPTR createthreadtree()
{
	NPTR root=NULL,p;
	int temp;
	printf("pls enter elements, terminate by -99");
	scanf("%d",&temp);
	while(temp!=-99)
	{
		p=getnode();
		p->info=temp;
		p->left=p->right=NULL;
		p->rthread=0;

		root=insertnode(root,p,NULL);
		printf("enter the next element");
		scanf("%d",&temp);
	}
	return root;
}

void inorder(NPTR root)
{
	NPTR p=root,q;
	do
	{
		while(p!=NULL)
		{
			q=p;
			p=p->left;
		}
		if(q!=NULL)
		{
			printf("	%d",q->info);
			p=q->right;
			while(q!=NULL&&q->rthread)
			{
				printf("	%d",p->info);
				q=p;
				p=p->right;
			}
		}
	}while(p!=NULL);
}

int main()
{
	NPTR root;
	int ch,i;
	root=createthreadtree();
	printf("INORDER");
	inorder(root);
}

