#include<iostream>
using namespace std;
char A[205][205];
int x;int n;
int query(int a,int b)
{
    if(A[a][b]=='Y')
        return 1;
    else
    {
        for(int i=0;i<n;i++)
        {
            if(A[i][a]=='Y')
            {
                return query(i,a);
            }
        }
    }
}
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cin>>A[i][j];
        }
        cin>>x;
        for(int i=0;i<x;i++)
        {
            cin>>a>>b;
            cout<<query(a,b);
        }
    }
}
