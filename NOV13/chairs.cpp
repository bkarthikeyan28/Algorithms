#include<iostream>
#include<math.h>
using namespace std;
#define MOD 1000000007
long long int fast_exp(int base, int exp)
{
    if(exp==1)
    return base;
    else
    {
        if(exp%2 == 0)
        {
            long long int base1 = pow(fast_exp(base, exp/2),2);
            if(base1 >= 1000000007)
            return base1%1000000007;
            else
            return base1;
        }
        else
        {
            long long int ans = (base*  pow(fast_exp(base,(exp-1)/2),2));
            if(ans >= 1000000007)
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
		int n;
		cin>>n;
		long long int ans=fast_exp(2,n)-1;
		cout<<ans<<endl;
	}
}
