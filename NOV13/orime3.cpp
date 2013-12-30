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
    long double m;
    int A[15]={1,2,4,6,10,12,16,18,22,28,30,36};
    int B[10]={2,3,5,7,11,13,17};
    while(t--)
    {
        long long int l,r,count=0,ans=0;
        cin>>l>>r;
        for(long long int i=l;i<=r;i++)
        {
            //cout<<i<<endl;
            for(int j=39;j>=3;j-=2)
            {
                count=0;
                for(int k=0;k<=6;k++)
                {
                    if(modulo(B[k],j,i)==1)
                        count++;
                }
                if(count==7)
                {
                    ans++;break;
                }
            }

        }
        cout<<ans<<endl;
    }
}

