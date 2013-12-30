#include<iostream>
using namespace std;
class LittleElephantAndBalls
{
public:
	int getNumber(string);
};
int LittleElephantAndBalls::getNumber(string S)
{
	int dpf[100],dpr[100];
	for(int i=0;i<100;i++)
	{
		dpf[i]=0;
		dpr[i]=0;
	}
	int r=0,g=0,b=0;
	int n=strlen(S);
	for(int i=0;i<n;i++)
	{
		if(S[i]=='R')
		{
			if(r==0)
			{
				r=1;
				dpf[i+1]++;
			}
			else dpf[i+1]=dpf[i];
		}
		if(S[i]=='G')
		{
			if(g==0)
			{
				g=1;
				dpf[i+1]++;
			}
			else dpf[i+1]=dpf[i];
		}
		if(S[i]=='B')
		{
			if(b==0)
			{
				b=1;
				dpf[i+1]++;
			}
			else dpf[i+1]=dpf[i];
		}
	}
	r=0,b=0,g=0;
	for(int i=n-1;i>=0;i--)
	{
		if(S[i]=='R')
		{
			if(r==0)
			{
				r=1;
				dpr[i-1]++;
			}
			else dpr[i-1]=dpr[i];
		}
		if(S[i]=='G')
		{
			if(g==0)
			{
				g=1;
				dpr[i-1]++;
			}
			else dpr[i-1]=dpr[i];
		}
		if(S[i]=='B')
		{
			if(b==0)
			{
				b=1;
				dpr[i-1]++;
			}
			else dpr[i-1]=dpr[i];
		}
	}
	int max=-100000000;
	for(int i=0;i<=n;i++)
	{
		if(dpf[i]+dpr[i]>=max)
			max=dpf[i]+dpr[i];
	}
	return max;


}