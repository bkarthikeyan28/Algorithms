#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int t,H[55],D[55],F[55],sum,ans;
    cin>>t;
    while(t--)
    {
        int n;
        sum=0;ans=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>H[i];
        for(int i=0;i<n;i++)
            cin>>D[i];
        for(int i=0;i<n;i++)
            F[i]=H[i]-D[i];
        if(n==1)
        {
                    if(H[0]>=D[0])
                        cout<<H[0]-D[0]<<endl;
                    else cout<<-1<<endl;

        }
        else if(n==2)
        {
            if(H[0]==D[1]&&H[1]==D[0])
                cout<<abs(H[1]-H[0])<<endl;
            else cout<<-1<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
                sum+=F[i];
            ans=(-1*sum)/(n-2);
            if(sum==0)
                cout<<0<<endl;
            else if(ans<=0)
                cout<<-1<<endl;
            else cout<<ans<<endl;
        }
    }
}
