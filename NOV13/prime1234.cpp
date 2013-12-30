#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,power;
	long long int B[1000005];
	cin>>t;
	while(t--)
	{
		long long int l,r,m,count=0;
		cin>>l>>r;
		for(int i=0;i<=1000000;i++)
			B[i]=0;
		for(int i=2;i<=1000000;i++)
		{
		power=1;
		m=pow(i,power);
		if(checkprime(i))
		{
			while(m<=l)
			{
				power++;
				m=pow(i,power);
			}
			while(m<=r)
			{
				B[m-l]=1;
				power++;
				m=pow(i,power);
			}
		}
		else
		{
			while(m<=l)
			{
				power++;
				m=pow(i,power);
			}
			while(m<=r)
			{
				B[m-l]=2;
				power++;
				m=pow(i,power);
			}
		}
		}
		for(int i=l;i<=r;i++)
            cout<<B[i-l]<<" ";
		for(int i=l;i<=r;i++)
		{
            //cout<<B[i]<<" ";
			if(B[i-l]==1)
				count++;
			else if(B[i-l]==0)
				count++;
		}
		cout<<count<<endl;

	}

}
