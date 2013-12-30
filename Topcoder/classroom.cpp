#include<iostream>
using namespace std;
class FoxandClassroom
{
public:
	string ableTo(int,int);
};
string FoxandClassroom::ableTo(int n,int m)
{
	bool visit[15][15];
	string a,b;
	a="Possible";
	b="Impossible";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			visit[i][j]=false;
	}
	int k=0,l=0,count=0,f=0;
	while(true)
	{
		if(visit[k][l]==true)
		{
			f=1;
			break;
		}
		visit[k][l]=true;
		count++;
		if(count==m*n)
		{
			break;
		}
		k=(k+1)%n;
		l=(l+1)%m;
		if(f==0)
			return a;
		else return b;
	}
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	int n,m;
	bool visit[15][15];
	cin>>n>>m;
		if(f==0)
		cout<<"Possible"<<endl;
	else cout<<"Impossible"<<endl;
	}
}
