#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t,visited[30],order[30],m,limit,len,B[30],C[30];
	char S[160000],X[160000],T[30];
	string dummy;
	cin>>t;
	while(t--)
	{
        int distinct=0;
		cin>>T;
		getline(cin,dummy);
		cin.getline(S,150005);
		len=strlen(S);
		m=0;
		for(int i=0;i<30;i++)
		{
            B[i]=0;
            C[i]=0;
            visited[i]=0;
		}
		for(int i=0;i<len;i++)
		{
			if(isalpha(S[i]))
            {
                X[i]=tolower(S[i]);
                B[(int)X[i]-97]++;
                if(visited[(int)X[i]-97]==0)
                {
                    distinct++;
                    order[m++]=(int)X[i]-97;
                    visited[int(X[i])-97]++;
                }
            }
			else X[i]=S[i];
		}
		//cout<<distinct<<endl;
		for(int i=0;i<26;i++)
			C[i]=B[i];
		for(int i=0;i<26;i++)
		{
			for(int j=0;j<26-i-1;j++)
			{
				if(C[j]>C[j+1])
					swap(C[j],C[j+1]);
			}
		}
		//cout<<m<<endl;
		for(int i=0;i<26;i++)
		{
			for(int j=0;j<26;j++)
			{
				if(B[i]==C[j])
				{
					B[i]=j;
					C[j]=0;
					break;
				}
			}
		}
		//for(int i=0;i<len;i++)
          //  cout<<B[(int)X[i]-97]<<" ";
        //cout<<endl;
		for(int i=0;i<len;i++)
		{
			if(isalpha(S[i]))
			{
				if(isupper(S[i]))
				{
					cout<<(char)toupper(T[B[(int)X[i]-97]]);
				}
				else cout<<(char)T[B[(int)X[i]-97]];
			}
			else cout<<(char)S[i];
		}
		cout<<endl;
	}
}
