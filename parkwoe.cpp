#include<iostream>
using namespace std;
int main()
{
    int t,A[105][105];
    cin>>t;
    while(t--)
    {
        int m,n,count=0,f=1,i,j;
        cin>>m>>n;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>A[i][j];
            }
        }
        A[0][0]=2147483647;
        i=0;j=0;
        //while(i!=n-1&&A[i][j+1]!=2147483647||A[i][j+1]!=2147483647&&A[i+1][j]!=2147483647||i!=n-1&&j!=n-1||j!=n-1&&A[i+1][j]!=2147483647)
        for(int i=0;i<m;i++)
        {
        for(int j=0;j<n;j++)
        {
            if(j==n-1&&A[i+1][j]==2147483647)
            {
                    int k=1;count++;break;
            }
            else if(i==n-1&&A[i][j+1]==2147483647)
            {
                int k=1;count++;break;
            }
            else if(A[i][j+1]>A[i+1][j]&&A[i][j+1]!=2147483647&&A[i+1][j]!=2147483647)
            {
                A[i][j]=
                i=i+1;count++;
            }
            else if(A[i][j+1]<A[i+1][j]&&A[i][j+1]!=2147483647&&A[i+1][j]!=2147483647)
            {
                j=j+1;
                count++;
            }
        }
        }

        cout<<count<<endl;
    }
}

