#include<iostream>
using namespace std;
int main()
{
	long long int t,min,y,index;
	char S[100005][8];
	long long int A[100005];
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>S[i]>>A[i];
		min=2000000007;
		for(int i=0;i<n;i++)
		{
			int f=0;
			y=A[i];
			for(int j=0;j<n;j++)
			{
				if(A[i]==A[j]&&i!=j)
				{
					break;
				}
				f++;
			}
			if(f==n&&y<=min)
			{
					min=y;index=i;
			}
		}
		if(min==2000000007)
			cout<<"Nobody wins."<<endl;
		else cout<<S[index]<<endl;
	}
}
