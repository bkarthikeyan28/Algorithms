#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,r;
        cin>>n>>m>>r;
        for(int i=0;i<n;i++)
        {
            cin>>E[i]>>F[i];
        }
        for(int i=0;i<n;i++)
        {
             B[E[i]]=F[i];
        }
        int a,b;
        int af=1,bf=0;
        for(int i=0;i<n;i++)
        {
            if(af==1)
            {
                a+=A[i];
                if(B[A[i]]!=-1)
                {
                    k=B[A[i]];
                    while(B[k]!=-1)
                    {
                        a+=k;
                        k=B[k];
                    }
                }

            }

        }
    }
}
