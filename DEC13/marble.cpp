#include<iostream>
#include<stdio.h>
#define gc getchar_unlocked
int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
using namespace std;
int main()
{
   	unsigned int A[1000005];
	long long int B[50005],C[50005];
	bool visited[1000005]={false};
	char s;
	int n,t,a,b;
	n=read_int();
	t=read_int();
	for(int i=0;i<n;i++)
	{
        		A[i]=read_int();
		if(i!=0)
			A[i]=A[i]+A[i-1];
	}
	int count=0;
	for(int i=0;i<50005;i++)
		C[i]=0;
	while(t--)
	{
		int f=1,temp=0;
		cin>>s;
		a=read_int();
		b=read_int();
		if(s=='G')
		{
			for(int i=0;i<count;i++)
			{
               			 if(visited[a]==false)
                    				break;
				if(B[i]==a)
				{
					f=0;
					C[i]+=b;
				}
			}
			if(f!=0)
			{
                			visited[a]=true;
				B[count]=a;
				C[count]+=b;
				count++;
			}
		}
		if(s=='T')
		{
			for(int i=0;i<count;i++)
			{
                			if(visited[a]=false)
                    				break;
				if(B[i]==a)
				{
					f=0;
					C[i]-=b;
				}
			}
			if(f!=0)
			{
                			visited[a]=true;
				B[count]=a;
				C[count]-=b;
				count++;
			}
		}
		if(s=='S')
		{
			for(int i=0;i<count;i++)
			{
				if(B[i]>=a&&B[i]<=b)
				{
					temp+=C[i];
				}
			}
			if(a==0)
			{
				cout<<A[b]+temp<<endl;
			}
			else
			{
				cout<<A[b]-A[a-1]+temp<<endl;
			}

		}


	}
}
