#include<iostream>
//#include<cstdint>
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
		if(k%2==1)
		{
			if(S[0]=='A')
			{
				for(int i=1;i<=n;i++)
				{
					ans=ans & A[i];
				}
				cout<<ans<<endl;
			}
			else if(S[0]=='X')
			{
				for(int i=1;i<=n;i++)
				{
					ans=ans ^ A[i];
				}
				cout<<ans<<endl;
			}
			else if(S[0]=='O')
			{
				for(int i=1;i<=n;i++)
				{
					ans=ans | A[i];
				}
				cout<<ans<<endl;
			}
		}
		else cout<<ans<<endl;
	}
}
