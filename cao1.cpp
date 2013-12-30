#include<iostream>
using namespace std;
int main()
{
    int t;
    char A[100][100];
    int P[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,49};
    cin>>t;
    while(t--)
    {
        int ans=0;
        int row,col;
        cin>>row>>col;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin>>A[i][j];
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(A[i][j]=='#')
                    continue;
                else
                {
                int l=0,t=0,b=0,r=0,count=0,min,min1;
                for(int k=j-1;k>=0;k--)
                {
                    if(A[i][k]=='^')
                        l++;
                    else break;
                }
                 for(int k=j+1;k<=col-1;k++)
                 {
                    if(A[i][k]=='^')
                        r++;
                    else break;
                 }
                 for(int k=i+1;k<=row-1;k++)
                 {
                    if(A[k][j]=='^')
                        b++;
                    else break;
                 }
                 for(int k=i-1;k>=0;k--)
                 {
                    if(A[k][j]=='^')
                        t++;
                    else break;
                 }
                 //cout<<l<<" "<<r<<" "<<t<<" "<<b<<endl;
                 if(l<r)
                    min=l;
                else  min=r;
                if(t<b)
                    min1=t;
                else min1=b;
                if(min<min1);
                else min=min1;
                for(int i=0;i<15;i++)
                {
                    if(P[i]<=min)
                      count++;
                }
                if(count>0)
                    ans++;
                }

            }
        }
        cout<<ans<<endl;
    }
}
