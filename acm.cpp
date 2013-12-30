#include<iostream>
using namespace std;
int main()
{
    int t,n,m,count,max;
    char A[105][105],B[105][105];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    cin>>A[i][j];
                    int m=A[i][j];
                    B[i][j]=m;
                }
        }
        count=0;max=0;
        for(int i=1;i<n-1;i++)
        {
            int j=0;//for(int j=0;j<n-1;j++)
            {
                for(int k=0;k<=n-j-1;k++)
                {
                    for(int l=0;l<=n-i-1;l++)
                    {
                        if((int)B[k][l]==(int)A[k][l+i])
                           { count++;cout<<i<<endl;}
                    }
                }
                if(count>max)
                    max=count;

            }
        }
        cout<<count<<endl;
        cout<<max<<endl;
    }

}
