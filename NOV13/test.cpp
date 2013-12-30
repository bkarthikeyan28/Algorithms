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
	long long int t,dp[45];
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        int count=0;
        for(int i=1;i<=n;i++)
        {
            count=0;
            for(int j=0;j<=i;j++)
            {
                for(int k=0;k<=i;k++)
                {
                    if(j+4*k==i)
                        count++;
                }
            }
            dp[i]=count;
        }
        for(int i=1;i<=n;i++)
            cout<<dp[i]<<" ";
	}
}

