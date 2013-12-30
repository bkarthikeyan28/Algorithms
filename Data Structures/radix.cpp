#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<digits;i++)
	{
		for(int k=0;k<10;k++)
			buck_count[k]=0;
		for(int i=0;i<n;i++)
		{
			r=(a[i]/divisor)%10;
			bucket[r][buck_count[r]++]=a[i];
		}
		m=0;
		for(int k=0;k<10;k++)
		{
			for(int j=0;j<buck_count[k];j++)
				a[m++]=bucket[k][j];
		}
		divisor*=10;
	}
}