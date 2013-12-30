#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,A[305][305],B[15];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			scanf("%d",&A[i][j]);
	}
	int q,a,b,c,d;
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		for(int i=0;i<=10;i++)
			B[i]=0;
		int ans=0;
		for(int i=a;i<=c;i++)
		{
			for(int j=b;j<=d;j++)
			{
				if(B[A[i][j]]==0)
				{
					B[A[i][j]]++;
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
}
