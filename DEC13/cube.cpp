#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,C[45][45][45],ans=0;
		float p;
		char A[65000],B[65000];
		float temp;
		int count=0;
		cin>>n>>p;
		scanf("%s %s",A,B);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(A[i*n*n+j*n+k]==B[i*n*n+j*n+k])
                    {
                       C[i][j][k]=1;
                    }
                    else C[i][j][k]=0;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(k!=0)
                        C[i][j][k]+=C[i][j][k-1];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(j!=0)
                        C[i][j][k]+=C[i][j-1][k];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(i!=0)
                        C[i][j][k]+=C[i-1][j][k];
                }
            }
        }
        for(int m=n-1;m>=0;m--)
        {
            for(int i=m;i<n;i++)
            {
                for(int j=m;j<n;j++)
                {
                    for(int k=m;k<n;k++)
                    {
                        if(k!=m&&i!=m&&j!=m)
                        {
                            //cout<<i<<" "<<j<<" "<<k<<endl;
                            temp=C[i][j][k]-C[i-m-1][j][k]-C[i][j][k-m-1]-C[i][j-m-1][k]+C[i-m-1][j][k-m-1]+C[i-m-1][j-m-1][k]+C[i][j-m-1][k-m-1]-C[i-m-1][j-m-1][k-m-1];
                        }
                        else if(k!=m&&i!=m&&j==m)
                        {
                            //cout<<i<<" "<<j<<" "<<k<<endl;
                            temp=C[i][j][k]-C[i][j][k-m-1]-C[i-m-1][j][k]+C[i-m-1][j][k-m-1];
                        }
                        else if(k==m&&i!=m&&j!=m)
                        {
                            //cout<<i<<" "<<j<<" "<<k<<endl;
                            temp=C[i][j][k]-C[i][j-m-1][k]-C[i-m-1][j][k]+C[i-m-1][j-m-1][k];
                        }
                        else if(i==m&&j!=m&&k!=m)
                        {
                            //cout<<i<<" "<<j<<" "<<k<<endl;
                            temp=C[i][j][k]-C[i][j-m-1][k]-C[i][j][k-m-1]+C[i][j-m-1][k-m-1];
                        }
                        else if(i==m&&j==m&&k==m)
                        {
                            //cout<<i<<" "<<j<<" "<<k<<endl;
                            temp=C[i][j][k];
                        }
                        else if(i==m&&j==m&&k!=m)
                        {
                           // cout<<i<<" "<<j<<" "<<k<<endl;
                            temp=C[i][j][k]-C[i][j][k-m-1];
                        }
                        else if(i==m&&j!=m&&k==m)
                        {
                           // cout<<i<<" "<<j<<" "<<k<<endl;
                            temp=C[i][j][k]-C[i][j-m-1][k];
                        }
                        else if(i!=m&&j==m&&k==m)
                        {
                            //cout<<i<<" "<<j<<" "<<k<<endl;
                            temp=C[i][j][k]-C[i-m-1][j][k];
                        }
                        //cout<<temp<<endl;
                        temp=(temp)/((m+1)*(m+1)*(m+1));
                        //cout<<temp<<endl;
                        temp*=100;
                        //cout<<temp<<endl;
                        if(temp>=p)
                        {
                            //cout<<i<<" "<<j<<" "<<k<<endl;
                            ans++;
                        }
                    }
                }
            }
            if(ans>0)
            {
                printf("%d %d\n",m+1,ans);
                break;
            }
        }
        if(ans==0)
            printf("-1\n");
	}

}
