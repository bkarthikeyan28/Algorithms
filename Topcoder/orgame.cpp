#include<iostream>
using namespace std;
class ORSolitaire
{
public:
	int getMinimum(vector<int>,int);
};
int ORSolitaire::getMinimum(vector<int>numbers,int target)
{
	int result=numbers.size();
	for(int i=0;i<31;i++)
	{
		if(target&&(1<<i))
		{
			int c=0;
			for(int x:numbers)
			{
				if((x&(1<<i))&&((target&x)==x))
					c++;
			}
		}
		result=min(result,c);
	}
	return result;
}