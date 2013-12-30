#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,m;
    cin>>t;
    while(t--)
    {
        int n,k,B[100005],count;
        cin>>n>>k;
        vector< vector<int> >vec(n,vector<int>(k));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                cin>>vec[i][j];
            }
        }
        for(int i=0;i<k;i++)
            cin>>B[i];
        int f=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                count=0;
                for(int l=0;l<k;l++)
                {
                    if(vec[i][l]+vec[j][l]<=B[l])
                    {
                        count++;
                        m=j;
                    }
                }
                if(count==k)
                {
                    cout<<2<<endl;
                    cout<<i+1<<" "<<m+1<<endl;
                    f=1;
                    break;
                }
            }
            if(f==1)
                break;
        }
        if(f!=1)
        {
        for(int i=0;i<n;i++)
        {
            count=0;
            for(int j=0;j<k;j++)
            {
                if(vec[i][j]<=B[j])
                {
                    count++;
                }
            }
            if(count==k)
            {
                cout<<1<<endl;
                cout<<i+1<<endl;
                f=1;
                break;
            }
        }
        }
        if(f==0)
            cout<<0<<endl;
    }
}
