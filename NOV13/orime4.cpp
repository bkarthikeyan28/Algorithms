#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;
long long int modulo(long long int a,long long int b,long long int c)
{
    long long int x = 1;
    long long int y = a;
    while(b>0)
    {
                if (b%2==1)
                        x = (x*y)%c;
                y = (y*y)%c;
                b = b/2;
    }
        return x%c;
}
int main()
{
    int t;
    cin>>t;
    long long int pow[50];
    pow[0]=1;
    for(int i=1;i<=39;i++)
    {
        pow[i]=pow[i-1]*2;
    }
    while(t--)
    {
        long long int l,r;
        cin>>l>>r;
        for(long long int i=l;i<=r;i++)
        {
             //cout<<i<<endl;
            for(int j=11;j>=0;j--)
            {
                //cout<<A[j]<<" ";
                m=pow(i,(1.0/A[j]));
                //cout<<m<<endl;
                if(m==(int)m)
                {
                    //cout<<m<<endl;
                    if((int)m%2!=0)
                    {
                            for(int i=39;i>=0;i--)
                            {
                                if((int)m-1/pow[i])
                            }

                            //cout<<m<<endl;
                            count++;break;

                    }
                }
            }
        }
    }
