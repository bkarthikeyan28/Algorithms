#include<iostream>
#include<vector>
using namespace std;
class WinterAndMandarins
{
public:
	int getNumber(vector<int>,int);
};
int WinterAndMandarins::getNumber(vector<int>bags,int k)
{
	int  n=bags.size();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(bags[j]>bags[j+1])
				swap(bags[j],bags[j+1]);
		}
	}
	int min=1000000007;
	for(int i=k-1;i<n;i++)
	{
		if(bags[i]-bags[i-k+1]<min)
			min=bags[i]-bags[i-k+1];
	}
	return min;
}