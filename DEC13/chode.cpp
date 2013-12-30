#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	int t,B[100],C[100];
	bool visit[100];
	char T[100],X[1000000];
	char S[1000000];
	string dummy;
	cin>>t;
	while(t--)
	{
        for(int i=0;i<30;i++)
            visit[i]=false;
		for(int i=0;i<30;i++)
			B[i]=0;
        cin>>T;
        getline(cin,dummy);
        cin.getline(S,160000);
		int len=strlen(S);
		for(int i=0;i<len;i++)
		{
            if(isalpha(S[i]))
                {
                    X[i]=tolower(S[i]);
                }
            else X[i]=S[i];
		}
		//cout<<endl;
		for(int i=0;i<len;i++)
		{
            if(isalpha(X[i]))
            {
			B[(int)X[i]-97]++;
			}
		}
		for(int i=0;i<30;i++)
			{
				C[i]=B[i];
			}
		for(int i=0;i<30;i++)
		{
			for(int j=0;j<30-i-1;j++)
			{
				if(C[j]<C[j+1])
					swap(C[j],C[j+1]);
			}
		}
		for(int i=len-1;i>=0;i--)
		{
            if(isalpha(X[i]))
            {
			if(visit[(int)X[i]-97]==false)
			{
				for(int j=0;j<30;j++)
				{
					if(B[(int)X[i]-97]==C[j])
					{
						B[(int)X[i]-97]=j;
						C[j]=0;
						visit[(int)X[i]-97]=true;
						break;
					}
				}
			}
			}
		}

		for(int i=0;i<len;i++)
		{
            if(isalpha(S[i]))
            {
			if(isupper(S[i]))
			{
				cout<<(char)toupper(T[25-B[(int)X[i]-97]]);
			}
			else
			{
				cout<<T[25-B[(int)X[i]-97]];
			}
			}
			else cout<<S[i];
		}
		cout<<endl;


	}
}
