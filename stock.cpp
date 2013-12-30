#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,A[50005],max[50005];
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>A[i];
        max[n]=A[n];
        for(int i=n-1;i>=1;i--)
        {
            if(A[i]>max[i+1])
                max[i]=A[i];
            else max[i]=max[i+1];
        }
        //for(int i=1;i<=n;i++)
          //  cout<<max[i]<<" ";
        int sum=A[1],count=1,ans=0;int f=1;
        for(int i=1;i<=n;i++)
        {
            if(A[i]==max[i])
            {
                ans+=((count*max[i])-sum);
                sum=A[i+1];
                f=i+1;
                count=1;
            }
            else
            {
                    if(f!=i)
                    {
                        count++;
                        sum+=A[i];
                    }

            }
        }
        cout<<ans<<endl;
    }
}
