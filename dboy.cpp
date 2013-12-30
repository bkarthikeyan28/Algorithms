#include<iostream>
using namespace std;
int main()
{
    int t,dp[1005],H[505],K[505];
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>H[i];
        for(int i=1;i<=n;i++)
            cin>>K[i];
        int max=H[0];
        for(int i=1;i<=n;i++)
        {
            if(H[i]>max)
                max=H[i];
        }
        dp[0]=0;
        for(int j=1;j<=2*max;j++)
            dp[j]=1000000000;
        for(int i=1;i<=n;i++)
        {
            for(int j=K[i];j<=2*max;j++)
            {
                 dp[j] = min(dp[j],1+dp[j-K[i]]);
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            ans+=dp[2*H[i]];
        }
        cout<<ans<<endl;



    }
}
