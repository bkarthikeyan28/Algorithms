#include<iostream>
using namespace std;
int main()
{
	int visited[10]={0},cost[10][10],ne=1,count=0,n,a,b,u,v,min=999;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>cost[i][j];
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	visited[1]=1;
	while(ne<n)
	{
		for(int i=1,min=999;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
					if(visited[i]!=0)
					{
						min=cost[i][j];
						a=u=i;
						b=v=j;
					}
				}
			}

					if(visited[u]==0||visited[v]==0)
					{
						cout<<"Edge"<<" "<<ne++<<":("<<a<<","<<b<<") "<<min<<endl;
						count+=min;
						visited[b]=1;
					}
					cost[a][b]=cost[b][a]=999;
        }
	}
	cout<<endl<<count;

}
