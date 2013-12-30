#include<iostream>
using namespace std;
int main()
{
	long long int n,A[100007],left[100007],right[100007],ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int f=0,prev;
	left[0]=0;
	right[n-1]=0;
	for(int i=1;i<n;i++)
	{
		if(A[i]>A[i-1])
			left[i]=left[i-1]+1;
		else left[i]=0;
	}
	for(int i=n-2;i>=0;i--)
	{
		if(A[i]>A[i+1])
			right[i]=right[i+1]+1;
		else right[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		ans+=max(left[i],right[i])+1;
	}
	cout<<ans<<endl;
}
