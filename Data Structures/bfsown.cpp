#include<iostream>
using namespace std;
#include<list>
class Graph
{
	int v;
	list<int>*adj;
	void BFS(int s);
	Graph(int v);
	void addEdge(int v,int w);
};
Graph::Graph(int v)
{
	this->v=v;
	adj=new list<int>[v];
}
void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}
Graph void::BFS(int s)
{
	bool *visited=new bool[v];
	for(int i=0;i<v;i++)
		bool[i]=false;
	list<int> queue;
	visited[s]=true;
	queue.push_back(s);
	list<int>::iterator i;
	while(!queue.empty())
	{
		s=queue.front();
		cout<<s<<" ";
		queue.pop_front();
		for(i=adj[s].begin();i!=adj[s].end();++i)
		{
			visited[*i]=true;
			queue.push_back(*i);
		}
	}

}