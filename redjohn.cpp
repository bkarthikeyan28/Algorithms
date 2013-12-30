#include<iostream>
#include<math.h>
using namespace std;
int checkprime(long long int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
int main()
{
	long long int t,dp[45][15];
	cin>>t;
	for(int i=0;i<=40;i++)
		{
			for(int j=0;j<=10;j++)
			{
				if(j==0)
				{
					dp[i][j]=1;
				}
				else if(i==0)
				{
					dp[i][j]=1;
				}
				else
				{
					dp[i][j]=(dp[i-1][j]*(i+j))/i;
				}
			}
		}
	while(t--)
	{
		long long int c,sum=0,ans=0;
		cin>>c;
		for(int i=0;i<=40;i++)
		{
			for(int j=0;j<=10;j++)
			{
                cout<<dp[i][j]<<" ";
				if(i+4*j==c)
					sum+=dp[i][j];
			}
			cout<<endl;

		}
		for(long long int i=2;i<=sum;i++)
		{
            ans+=checkprime(i);
		}
		cout<<ans<<endl;

	}
}
