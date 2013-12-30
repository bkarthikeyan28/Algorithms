#include<iostream>
#include<math.h>
using namespace std;
#define MOD 1000000007
unsigned long long int fast_exp(unsigned long long int base,unsigned long long int exp)
{
    unsigned long long int k;
    if(exp==1)
    return base;
    else
    {
        if(exp%2 == 0)
        {
            k=(fast_exp(base,exp/2))%1000000007;
            unsigned long long int base1=(k*k)%1000000007;
            if(base1 >= 1000000007)
            return base1%1000000007;
            else
            return base1;
        }
        else
        {
            k=fast_exp(base,(exp-1)/2);
            unsigned long long int ans=(((base*k)%1000000007)*k)%1000000007;
            if(ans >= 1000000007)
            return ans%1000000007;
            else
            return ans;
        }
    }
}
int main()
{
    long long int t,a;
    unsigned long long int pow10[25];
    pow10[0]=1;
    for(int i=1;i<=20;i++)
    {
        pow10[i]=pow10[i-1]*10;
    }
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        unsigned long long int count=0,num=0,ans1=1;
        while(n!=0)
        {
            a=(n>>0)&1;
            num+=(pow10[count]*a);
            n=n>>1;
            count++;
        }
        //cout<<num<<endl;
        //num*=2;
        //cout<<num<<endl;
        ans1=fast_exp(2,num);
        ans1=fast_exp(ans1,2);
        ans1=ans1%1000000007;
        cout<<ans1<<endl;
    }
        //ans1=fast_exp(ans1,2);
        //cout<<ans1<<endl;
    }


