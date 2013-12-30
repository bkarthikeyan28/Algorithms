#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,l=0,ans=0,f;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
            f=1;
            if(i==2)
                ans++;
			else if(i%4==1)
			{
				int k=1;
				for(long long int j=2;j<=sqrt(i);j++)
				{
                    f=0;
					if(i%j!=0);
					else
					{
						k=0;break;
					}
				}
				if(k!=0&&f==0)
					ans++;
			}
		}
		cout<<ans<<endl;

	}
}
