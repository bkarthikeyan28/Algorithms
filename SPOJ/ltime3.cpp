#include<iostream>
using namespace std;
int main()
{
    long long  int n,k,A[150005];
    long long  int B[150005];
    cin>>n>>k;
    for(long long int i=1;i<=n;i++)
        cin>>A[i];
    B[1]=A[1];
    for(long long int i=2;i<=n;i++)
        B[i]=A[i]+B[i-1];
    long long int ans=0;
    for(long long int i=1;i<=n;i++)
    {
        if(i==1)
        {
            for(long long int j=1;j<=n;j++)
            {
                if(A[j]>=k)
                    ans++;
            }
        }
        else
        {
            for(long long int j=i;j<=n;j++)
            {
                if(j==i)
                {
                    if(((B[j]*(1.0))/i)>=k)
                        ans++;
                }
                else
                {
                if((((B[j]-B[j-i])*(1.0))/i)>=k)
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}
