#include<iostream>
using namespace std;
int main()
{
    int n,count=0,A[1005][1005];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
        cin>>A[i][j];
        if(A[i][j]!=0)
            count++;
        }
    }
    cout<<count<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
        if(A[i][j]!=0)
            cout<<A[i][j]<<" "<<i<<" "<<i<<" "<<j<<" "<<j<<endl;
        }
    }


}
