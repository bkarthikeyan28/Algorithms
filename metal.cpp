#include<iostream>
using namespace std;
int main()
{
    int t,n,c,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        m=n/c;
        if(m==0)
            cout<<0<<endl;
        else
            cout<<m-1<<endl;

    }
}
