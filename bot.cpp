#include<iostream>
using namespace std;
int main()
{
	int t,i,b,c,D[100005],E[100005],ans1,ans2,min,diff,m,z;
	char A[10];
	int arrlen=0;
	cin>>t;
	while(t--)
	{
		cin>>A>>b>>c;
		if(A[0]=='a')
		{
            arrlen++;
			D[arrlen]=b;
			E[arrlen]=c;
		}
		if(A[0]=='e')
		{
			for(int j=1;j<=arrlen;j++)
			{
				if(D[j]==b&&E[j]==c)
				{
					E[j]=-1;
					break;
				}
			}
		}
		if(A[0]=='g')
		{
            int count=0,countbutless=0;
            for(int i=1;i<=arrlen;i++)
            {
                for(int j=1;j<arrlen;j++)
                {
                    if(D[j]>D[j+1])
                    {
                     int temp;
                    temp = D[j];
                    D[j]=D[j+1];
                    D[j+1]=temp;
                    temp = E[j];
                    E[j]=E[j+1];
                    E[j+1]=temp;
                    }
                }
            }
            for(int j=1;j<=arrlen;j++)
            {
                if(D[j]>b)
                {
                    ans1=D[j];
                    int m=j;
                    while(D[m]==D[j])
                    {
                        m++;
                    }
                    m--;
                    for(int i=j;i<=m;i++)
                    {
                        for(int k=j;k<m;k++)
                        {
                            if(E[k]>E[k+1])
                            {
                                int temp;
                                temp = E[k];
                                E[k]=E[k+1];
                                E[k+1]=temp;
                            }
                        }
                    }
                    for(int i=j;i<=m;i++)
                    {
                        cout<<c<<" "<<j<<" "<<m<<endl;
                        if(E[i]-c>0&&E[i]>=0)
                            {min=E[i];}
                        else countbutless++;
                    }
                    z=j;
                }
                else
                {
                    count++;
                }
            }
            for(int i=1;i<=arrlen;i++)
                {
                    cout<<D[i]<<" "<<E[i];cout<<endl;
                }

            if(count==arrlen||countbutless==m-z+1)
                cout<<-1<<endl;
            else cout<<ans1<<" "<<min<<endl;
		}
	}
}
