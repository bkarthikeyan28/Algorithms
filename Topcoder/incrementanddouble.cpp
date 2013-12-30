#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int A[100];
class IncrementAndDoubling
{
public:
	int getMin(vector <int> A)
	{
		int ans=0,n,index;
		n=A.size();
		int min=A[0];
		for(int i=1;i<n;i++)
		{
			if(A[i]<min)
				{
					min=A[i];
					index=i;
				}
		}
		int a=0;
		while(pow(2,a)<=min)
		{
			a++;
		}
		if(a!=0)
		{
			ans+=((min-pow(2,a))*n);
			ans+=a;
			ans+=n;
		}
		else 
		{
			if(min==1)
			{
				ans=n;
			}
			if(min==0)
			{
				ans=0;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(i!=index)
			{
				ans+=(A[i]-min);
			}
		}
		return ans;
		
	}

};
