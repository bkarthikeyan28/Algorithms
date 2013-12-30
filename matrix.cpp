#include<iostream>
using namespace std;
int main()
{
    int t;
    int n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1|m==1)
            cout<<1<<endl;
        else cout<<2<<endl;
    }
}
