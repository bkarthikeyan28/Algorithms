#include<iostream>
using namespace std;
int main()
{
	int t,i,b,c,D[100006],E[100006],ans1,ans2,min,z,m,temp,y;
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
            int p=1;
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
                                temp = E[k];
                                E[k]=E[k+1];
                                E[k+1]=temp;
                            }
                        }
                    }
                    z=j;y=m;
                    for(int i=j;i<=m;i++)
                    {
                        if(E[i]-c>0&&E[i]>0)
                            {
                                min=E[i];
                                cout<<ans1<<" "<<min<<endl;
                                p=0;
                                break;
                            }
                    }
                    if(p==0)
                        break;

                }
            }
            //for(int i=1;i<=arrlen;i++)
                //{
                  //  cout<<D[i]<<" "<<E[i];cout<<endl;
                //}
                //cout<<y<<" "<<z<<endl;
            //cout<<count<<" "<<countbutless;
            //if(count==arrlen||countbutless==y-z+1)
                //cout<<-1<<endl;
            //else cout<<ans1<<" "<<min<<endl;
            //cout<<arrlen;
            //cout<<count<<endl;
            if(p==1)
            cout<<-1<<endl;
		}
	}
}
