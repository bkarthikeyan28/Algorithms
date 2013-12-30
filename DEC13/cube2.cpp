#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		char A[65000],B[65000];
		float temp;
		int count=0;
		cin>>n>>p;
		cin>>A>>B;
		for(int i=0;i<n*n*n;i++)
            C[i]=0;
		for(int i=0;i<n;i++)
		{
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(A[i*n*n+j*n+k]==B[i*n*n+j*n+k])
                    {
                        if(k==0)
                            C[i*n*n+j*n+k]++;
                        else
                            C[i*n*n+j*n+k]=C[i*n*n+j*n+k-1]+1;
                    }
                }
            }
		}
		for(int m=n;m>=1;m--)
		{
                for(int i=0;i<l+m;i++)
                {
                    for(int j=l;j<l+m;j++)
                    {
                        for(int l=0;l<=n-m;l++)
                        {
                            temp

                        }

                    }
                }
		}
    }
}
