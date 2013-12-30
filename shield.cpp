#include<iostream>
#include<string.h>
using namespace std;
int LCSubStr(char *X, char *Y, int m, int n)
{
    int LCSuff[m+1][n+1];
    int result = 0;

    /* Following steps build LCSuff[m+1][n+1] in bottom up fashion. */
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (X[i-1] == Y[j-1])
            {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        }
    }
    return result;
}
int main()
{
	long long int t,A[100006];
	char S[100006],B[100006];
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>A[i];
		cin>>S;
		for(int i=1;i<n;i++)
		{
			if(A[i]>A[i-1])
				B[i-1]='G';
			else if(A[i]<A[i-1])
                B[i-1]='L';
            else B[i-1]='E';
		}
		int m=strlen(B);
		//cout<<m<<endl;
		int k=strlen(S);
		//cout<<k<<endl;
		int result=LCSubStr(B,S,m,k);
		//cout<<result<<endl;
		if(result==k)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


	}
}
