#include<iostream>
using namespace std;
int main()
{
        int t;
        cin>>t;
        while(t--)
        {
            long long int n,A[1000006];
            unsigned long long int ans=0;
            cin>>n;
            for(int i=0;i<n;i++)
                cin>>A[i];
            ans=(n-1)*(n);
            ans/=2;
            cout<<ans<<endl;
        }
}
