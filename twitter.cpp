#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int t;
	char A[500];
	scanf("%d\n",&t);
	while(t--)
	{
	cin.getline(A,1000);
	//cout<<A;
	int i=0;
	while(A[i]!=' ')
	{
        //cout<<"hi";
        i++;
	}
	int eachlenwithspace=i+1;
	cout<<eachlenwithspace<<endl;
	int totallen=strlen(A);
	//cout<<totallen<<endl;
	int totalwords=(140/eachlenwithspace)+1;
	cout<<totalwords<<endl;
	int pro=1;
	for(int i=1;i<=totalwords;i++)
	{
        pro*=(eachlenwithspace-1);
        pro%=1000000007;
	}
	cout<<pro<<endl;
	}

}
