#include<iostream>
#include<math.h>
using namespace std;
bool check(int a)
{
    int x;
    while(a>0)
    {
        x=a%10;
        if(x==4||x==7)
        {
                return true;break;
        }
        a/=10;
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>n;
        int p=sqrt(n);
        for(int i=1;i<=p;i++)
        {
            if(n%i==0)
            {
                if(check(i))count++;
                if(check(n/i))count++;
            }
        }
        cout<<count<<endl;
    }
}
