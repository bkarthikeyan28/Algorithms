#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    unsigned long long int t,n;
    cin>>t;
    unsigned long long int ans,sq;
    while(t--)
    {
    cin>>n;ans=0;
    n=n-1;
    //cout<<n*n<<endl;
    int r=sqrt(n);
            //cout<<r<<endl;
            for(int i=1;i<=r;i++)
                ans+=n/i;
            for(int i=1;i<=r-1;i++)
                {
                    ans+=(i*(n/i-n/(i+1)));
                }
            ans+=(r*(n/r-r));
    //cout<<ans<<endl;
    sq=n*n;
    ans=sq+n+2-ans;
    cout<<ans<<endl;
    }

}
