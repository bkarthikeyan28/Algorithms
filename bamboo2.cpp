#include<iostream>
using namespace std;
int main()
{
    int t,H[55],D[55],F[55],sum,ans,min,max;
    cin>>t;
    while(t--)
    {
        int n,index;
        int k=1,m=1,pass=0;
        sum=0;ans=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>H[i];
        for(int i=0;i<n;i++)
            cin>>D[i];
        while(ans!=70)
        {
        max=F[0];min=F[0];index=0;
        for(int i=1;i<n;i++)
        {
            if(F[i]>max)
            {
                max=F[i];
                index=i;
            }
            else if(F[i]<=min)
                min=F[i];
        }
        if(max==0&&min==0)
        {
            cout<<ans<<endl;break;
        }
        if(max-min>n)
        {
            cout<<-1<<endl;break;
        }
        ans++;
        for(int j=0;j<n;j++)
        {
            if(j==index)
            {
                F[j]-=1;
            }
            else F[j]+=1;
        }
        }
        if(ans==70)
                cout<<-1<<endl;
        //else cout<<ans<<endl;
        }
}




