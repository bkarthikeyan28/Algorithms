#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	int t,m;
    long long int A[20],ans;
	char B[20],C[20];
	A[0]=1;
	for(int i=1;i<=17;i++)
	{
		A[i]=A[i-1]*i;
	}
	cout<<A[17];
	cout<<"HI";
	cin>>t;
	while(t--)
	{
        cin>>B;
        cout<<B;
		cout<<"HI";
		for(int i=0;i<m;i++)
			C[i]=B[i];
        cout<<"HI";
		for(int i=0;i<m;i++)
		{
			for(int j=0;i<m-i-1;j++)
			{
				if(B[j]>B[j+1])
					swap(B[j],B[j+1]);
			}
		}
		cout<<"HI";
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(C[i]==B[j])
				{
					if((j-i)<0)
						j=i;
					ans+=(j-i)*A[m-i-1];
				}
			}
		}
		cout<<ans<<endl;
	}
}
