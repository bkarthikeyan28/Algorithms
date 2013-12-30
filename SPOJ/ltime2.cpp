#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int  main()
{
	long long int  n,x,a;
	vector<long long int >A;
	vector<long long int >B;
	cin>>n>>x;
	for(long long int  i=0;i<n;i++)
	{
		cin>>a;
		A.push_back(a);
		B.push_back(a);
	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	for(long long int  i=1;i<n;i++)
		B[i]+=B[i-1];
    a=n-1;
    long long int  f=0;
	while(B[a]>=x)
	{
        if(a==0)
        {
            f=1;break;
        }
        a--;
	}
	if(f==1)
	{
        cout<<n<<" "<<0<<endl;
	}
	else
	{
        if(a==n-1)
            cout<<0<<" "<<n<<endl;
        else
        {
        if((A[a+1]/(x-B[a]))<=2)
            cout<<n-a-2<<" "<<a+1<<endl;
        else cout<<n-a-1<<" "<<a+1<<endl;
        }
	}
}
