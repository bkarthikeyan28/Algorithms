#include<iostream>
#include<math.h>
using namespace std;
int isprime(long long int m)
{
    for(int i=2;i<=sqrt(m);i++)
    {
        if(m%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int t,count;
    float m;
    cin>>t;
    long long int l,r;
    while(t--)
    {
        cin>>l>>r;
        count=0;
        for(long long int i=l;i<=r;i++)
        {
            for(int j=4;j>=;j--)
            {
                m=pow(i,(1.0/j));
                //cout<<m<<endl;
                if(m>=2)
                {
                if(m==(int)m)
                {
                    cout<<m<<endl;
                    {
                        if((int)m%2==0)
                            {
                                if(isprime(m))
                                    {
                                        count++;
                                        cout<<i<<" "<<j<<endl;
                                        break;
                                    }
                            }
                    }
                }
                }
            }
        }
        cout<<count<<endl;
    }
}
