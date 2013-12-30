#include<iostream>
#include<vector>
using namespace std;
class TheShuttles
{
	public:
		int getLeastCost(int[],int,int);
};
int TheShuttles::getLeastCost(vector<int>cnt,int baseCost,int seatCost)
{
	int res=1000000007;
	for(int i=1;i<=100;i++)
	{
		for(int x:cnt)
		{
			temp+=floor(x/i);
		}
		res=min(res,(temp*baseCost+i*seatCost));
	}
	return res;

}
