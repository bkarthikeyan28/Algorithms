#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,A[1005],B[1005],R[1005],C[1005],ans=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>A[i]>>B[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(A[j]>A[j+1])
                {
                   A[j]=A[j]+A[j+1];
                   A[j+1]=A[j]-A[j+1];
                   A[j]=A[j]-A[j+1];
                   B[j]=B[j]+B[j+1];
                   B[j+1]=B[j]-B[j+1];
                   B[j]=B[j]-B[j+1];
                }
            }
        }
        for(int )
        cout<<ans<<endl;
    }
}
