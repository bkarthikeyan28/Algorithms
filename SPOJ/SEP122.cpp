#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<int>A;
		long long int n,x,min;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			A.push_back(x);
		}
		sort(A.begin(),A.end());
		min=A[1]-A[0];
		for(int i=2;i<n;i++)
		{
			if(A[i]-A[i-1]<min)
				min=A[i]-A[i-1];
		}
		cout<<min<<endl;
	}
}


