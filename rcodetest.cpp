#include<iostream>
using namespace std;
int main()
{
	int t,n,k,ans,A[1020];
	char S[5];
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>ans;
		for(int i=1;i<=n;i++)
			cin>>A[i];
		cin>>S;
		for(int j=1;j<=k;j++)
		{

			if(S[0]=='A')
			{
				for(int i=1;i<=n;i++)
				{
					ans=ans&A[i];
				}
				//cout<<ans<<endl;
			}
			else if(S[0]=='X')
			{
				for(int i=1;i<=n;i++)
				{
					ans=ans^A[i];
				}
				//cout<<ans<<endl;
			}
			else if(S[0]=='O')
			{
				for(int i=1;i<=n;i++)
				{
					ans=ans|A[i];
				}
				//cout<<ans<<endl;
			}
		}
		cout<<ans<<endl;
	}
}
