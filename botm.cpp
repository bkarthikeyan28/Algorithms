#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,A[100000],sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>A[i];
        for(int i=0;i<n;i++)
            sum+=abs(A[i]-A[n/2]);
        cout<<sum<<endl;
    }
}
