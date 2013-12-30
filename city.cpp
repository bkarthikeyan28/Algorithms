#include<iostream>
#include<cstdlib>
using namespace std;
long long int min(long long int a,long long int b)
{
    if(a<b)
        return a;
    else return b;
}
char A[205][205];
int main()
{
    long long int t,ans[205][205],max[205][205],a,b;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                    cin>>A[i][j];
                    if(A[i][j]=='Y')
                        max[i][j]=1;
                    else if(i==j)
                        max[i][j]=0;
                    else max[i][j]=90000;

            }
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    max[i][j]=min(max[i][j],max[i][k]+max[k][j]);
                }
            }
        }
        int x;
        cin>>x;
        for(int i=0;i<x;i++)
        {
            cin>>a>>b;
            cout<<max[a][b]<<endl;
        }

        //ans=2147483647;



    }
}
