#include<iostream>
#include<math.h>
using namespace std;
long long int fast_exp(long long int base,long long int exp)
{
    long long int k;
    if(exp==1)
    return base;
    else
    {
        if(exp%2==0)
        {
            k=(fast_exp(base,exp/2))%1000000007;
            long long int base1=(k*k)%1000000007;
            if(base1>=1000000007)
            return base1%1000000007;
            else
            return base1;
        }
        else
        {
            k=fast_exp(base,(exp-1)/2);
            long long int ans=(((base*k)%1000000007)*k)%1000000007;
            if(ans>=1000000007)
            return ans%1000000007;
            else
            return ans;
        }
    }
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,ans;
		cin>>n;
		ans=fast_exp(2,n-2)-1;
		cout<<ans<<endl;

	}

}
