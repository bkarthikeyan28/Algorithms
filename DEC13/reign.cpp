#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,A[100015];
		long long int formax[100015],revmax[100015],max1;
		cin>>n>>k;
		for(long long int i=0;i<n;i++)
			cin>>A[i];
		long long int maxhere=A[0];
		formax[0]=A[0];
		for(long long int i=1;i<n;i++)
		{
			maxhere=max(A[i],maxhere+A[i]);
			formax[i]=max(maxhere,formax[i-1]);
		}
		long long int revmaxhere=A[n-1];
		revmax[n-1]=A[n-1];
		for(long long int i=n-2;i>=0;i--)
		{
			revmaxhere=max(A[i],revmaxhere+A[i]);
			revmax[i]=max(revmaxhere,revmax[i+1]);
		}
		/*for(long long int i=0;i<n;i++)
            cout<<formax[i]<<" ";
        cout<<endl;
        for(long long int i=0;i<n;i++)
            cout<<revmax[i]<<" ";
        cout<<endl;*/
		max1=formax[0]+revmax[k+1];
		for(long long int i=1;i<n-k-1;i++)
		{
			if(max1<=formax[i]+revmax[i+k+1])
				max1=formax[i]+revmax[i+k+1];
		}
		cout<<max1<<endl;


	}
}
