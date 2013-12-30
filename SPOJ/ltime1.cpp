#include<iostream>
using namespace std;
int  main()
{
	long long int  n,m,A[1000][1000],l,a,b;
	cin>>n>>m;
	for(long long int  i=1;i<=n;i++)
	{
		for(long long int  j=1;j<=m;j++)
			cin>>A[i][j];
	}
	cin>>l;
	long long int  ans1=0,ans2=0;
	for(long long int  i=1;i<=l;i++)
	{
		cin>>a>>b;
		if(a<=n&&b<=m)
		{
			if(ans1!=-1)
				ans1+=A[a][b];
        }
		else
		{
			ans1=-1;
		}
		//cout<<ans1<<endl;
		if(b<=n&&a<=m)
		{
			if(ans2!=-1)
				ans2+=A[b][a];
        }
		else
		{
			ans2=-1;
		}
		//cout<<ans2<<endl;
	}
	cout<<max(ans1,ans2)<<endl;
}
