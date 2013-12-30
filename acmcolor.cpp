#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n,count=1,f=0,B[200005],ans=0;
		char S[20005];
		for(int i=0;i<20003;i++)
            B[i]=-1;
		cin>>n>>k;
		cin>>S;
		//cout<<S[0]<<S[1]<<S[2]<<endl;
		for(int i=1;i<n;i++)
		{
			if(S[i]!=S[0]&&count<k)
            {
                f=0;break;
            }
            else if(S[i]==S[0])
            {
                count++;
            }
			if(count==k)
			{
				f=1;break;
			}
		}
		count=1;
		if(f==0)
		{
		for(int i=n-2;i>=0;i--)
		{
			if(S[i]!=S[n-1]&&count<k)
            {
                f=0;break;
            }
            else if(S[i]==S[n-1])
            {
                count++;
            }
			if(count==k)
			{
				f=1;break;
			}
		}
		}
		if(f==0)
		{
			cout<<-1<<endl;
			continue;
		}
		else
		{
				for(int i=0;i<n;i++)
				{
                    if(B[(int)S[i]]==-1)
                    {
                        ans++;
                        B[(int)S[i]]=i;
                    }
					else if((i-B[(int)S[i]])/3==0&&B[(int)S[i]]==i-1)
					{
                            B[(int)S[i]]=i;
					}
					else
					{
						ans++;
						B[(int)S[i]]=i;
					}
				}

		}
		cout<<ans<<endl;
	}
}
