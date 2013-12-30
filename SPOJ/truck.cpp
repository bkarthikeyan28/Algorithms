#include<iostream>
using namespace std;
#include<algorithm>
#include<stack>
#include<vector>
int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		stack<int>B;
		stack<int>C;
		vector<int>A;
		int x;
		for(int i=0;i<t;i++)
		{
			cin>>x;
			A.push_back(x);
		}
		int n=A.size();
		reverse(A.begin(),A.end());
		int l=0;
		for(int i=0;i<n-1;i++)
		{
			l++;
			if(A[i]>A[i+1])
				C.push(A[i]);
			else B.push(A[i]);
		}
		int f=0;
		while(C.size()!=0)
		{
			if(l==n-1)
			{
				if(A[n-1]>C.top())
					{
						f=1;
						break;
					}
				else
					B.push(A[n-1]);
			}
			else
			{
				int x=C.top();
				C.pop();
				if(x>C.top())
				{
					f=1;break;
				}
				else
				{
					B.push(x);
				}
			}
		}
		if(f==1)
			cout<<"no"<<endl;
		else
		{

			cout<<"yes"<<endl;
		}


	}
}
