#include<iostream>
#include<math.h>
using namespace std;
int query(long long int a)
{
    int f=0,digit;
    while(a!=0)
    {
        digit=a%10;
        if(digit==0||digit==1||digit==4||digit==9)
        {
            f=1;a=a/10;
            continue;
        }
        else return 0;
    }
    if(f==1)
    {
        return 1;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,sum=0,e,m,n,temp1,temp2;
        cin>>a>>b;
        temp1=ceil(sqrt(a));
        temp2=ceil(sqrt(b));
        for(long long int i=temp1;i<=temp2;i++)
        {
            {
                e=query(i*i);
                n=i;
                m=i*i;
                if(e==1)
                    { sum+=1;cout<<m<<","; }
            }
        }
        //cout<<sum<<endl;
    }
}
