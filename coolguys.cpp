#include<iostream>
#include<math.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}
int main()
{
    long long int t,ans=0,denom,n,k,A[100];
    A[0]=1;
     for(int i=1;i<=35;i++)
        A[i]=A[i-1]*2;
    //cout<<A[30]<<endl;
    cin>>t;
    while(t--)
    {
        ans=0;
        k=0;
        cin>>n;
        while(A[k]<=n)
        {
            k++;
        }
        k--;
        ans=n+(k*n)/2;
        ans+=n-A[k];
        cout<<ans<<endl;
        long long int sq=n*n;
        long long int fac=gcd(ans,sq);
        //cout<<fac<<endl;
        cout<<ans/fac<<"/"<<sq/fac<<endl;

    }
}
