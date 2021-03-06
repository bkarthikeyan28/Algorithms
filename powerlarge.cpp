#include<iostream>
#include<string.h>
#include<math.h>
#define MOD 1000000007
using namespace std;
long long int fast_exp(int base, int exp)
{
    long long int k;
    if(exp==1)
    return base;
    else
    {
        if(exp%2 == 0)
        {
        	k=fast_exp(base,exp/2);
        	long long int base1=(k%MOD*k%MOD)%MOD;
            if(base1 >= MOD)
            return base1%MOD;
            else
            return base1;
        }
        else
        {
        	k=fast_exp(base,(exp-1)/2);
        	long long int ans=((k%MOD*k%MOD)%MOD*base)%MOD;
            //long long int ans = (base*  pow(fast_exp(base,(exp-1)/2),2));
            if(ans >= MOD)
            return ans%MOD;
            else
            return ans;
        }
    }
}
int main()
{
	int t;
	long long int mod1,mod2,ans;
	char A[100005],B[100005];
	cin>>t;
	while(t--)
	{
		cin>>A;
		cin>>B;
		mod1=((int)A[0]-48)%MOD;
		for(int i=1;i<strlen(A);i++)
		{
			mod1=(mod1*10+((int)A[i]-48))%MOD;
		}
		mod2=((int)B[0]-48)%MOD;
		for(int i=1;i<strlen(B);i++)
		{
			mod2=(mod2*10+((int)B[i]-48))%(MOD-1);
		}
		//cout<<mod1<<" "<<mod2<<endl;
		ans=fast_exp(mod1,mod2);
		cout<<ans<<endl;


	}
}
