#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,k;
	char A[6000006];
    cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int j=1,ans=0;
		for(int i=1;i<=n;i++)
		{
			int k=i;
			while(k>0)
			{
				A[j++]=k%10;
				k=k/10;
			}
		}
		cout<<j<<endl;
		for(int i=1;i<=105;i++)
            cout<<A[i];
		for(int i=n;i>=1;i--)
		{
			int m=k;
			int j=i;
			while(m>0)
			{
				if(A[j--]==(m%10))
				{
					m/=10;
					continue;
				}
				else break;
			}
			if(m==0)
				ans++;
		}

		cout<<ans<<endl;
	}
}
