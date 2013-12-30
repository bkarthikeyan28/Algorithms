#include<iostream>
using namespace std;
int mod(int a)
{
    if(a<0)
        return -1*a;
    else return a;
}
int main()
{
    int t,A[10000],B[10000];
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>A[i]>>B[i];
        int ans=0;
        for(int i=1;i<n;i++)
        {
            ans+=mod((A[i])-(A[i-1]));
            ans+=mod(((B[i])-(B[i-1])));
        }
        cout<<ans<<endl;
        for(int i=1;i<n;i++)
        {
            while(A[0]!=A[i])
            {

                    if(A[0]+1==B[0])
                    {
                        if(B[i]<B[0])
                            {
                                cout<<"R-";
                                B[0]--;
                            }
                        else
                        {

                                cout<<"R+";
                                B[0]++;
                        }
                    }
                    else
                    {
                        if(A[i]<A[0])
                            {
                                A[0]--;
                                cout<<"L-";
                            }
                        else

                            {
                                cout<<"L+";
                                A[0]++;
                            }
                    }
            }
            while(B[0]!=B[i])
            {
                if(B[i]<B[0])
                {
                    B[0]--;
                    cout<<"R-";
                }
                else
                {
                    B[0]++;
                    cout<<"R+";
                }
            }
        }
        cout<<endl;
    }
}
