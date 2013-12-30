#include<iostream>
#define INT_MAX 1000000007
#define v 9
using namespace std;
int distance(int dist[],bool sptSet[])
{
	int min=INT_MAX;
	int min_value;
	for(int i=0;i<v;i++)
	{
		if(sptSet[i]==false&&dist[i]<=min)
			min=dist[i],min_value=i;
	}
	return min_value;
}
void print(int dist[])
{
	for(int i=0;i<v;i++)
		cout<<i<<" "<<dist[i]<<endl;
}
void dijkstra(int graph[v][v],int src)
{
	int dist[v];
	bool sptSet[v];
	dist[src]=0;
	for(int i=0;i<v;i++)
	{
		dist[i]=INT_MAX;
		sptSet[i]=false;
	}
	for(int i=0;i<v;i++)
	{
		int u=distance(dist,sptSet);
		sptSet[u]=true;
		for(int j=0;j<v;j++)
		{
			if(sptSet[v]==false&&graph[u][v]&&dist[u]!=INT_MAX&&dist[u]+graph[u][v]<dist[v])
				dist[v]=dist[u]+graph[u][v];
		}
	}
	print(dist);
}
int main()
{
    int graph[v][v]={};
    int a,b,c,u,src;
//cin>>v;
	cin>>u;
	for(int i=0;i<u;i++)
	{
		cin>>a>>b>>c;
		graph[a][b]=c;
		graph[b][a]=c;
	}
	cin>>src;
	dijkstra(graph,src);

}
