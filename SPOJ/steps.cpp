#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans;
        if(a==1&&b==1)
            cout<<1<<endl;
        else if(a==b)
            {
                if(a%2==0)
                    cout<<2*a<<endl;
                else cout<<2*a-1<<endl;
            }
        else if(a-2!=b)
            cout<<"No Number"<<endl;
        else {
                if(a%2==0)
                    cout<<2*a-2<<endl;
                else cout<<2*a-3<<endl;
            }
    }
}
