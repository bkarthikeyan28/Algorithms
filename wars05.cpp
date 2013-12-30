#include<iostream>
using namespace std;
int main()
{
    int n,A[100008];char S[10];
    int a,b;
    cin>>n;
    int q;
    cin>>q;
    for(int i=1;i<100005;i++)
            A[i]=0;
    while(q--)
    {
        cin>>S>>a;
        if(S[0]=='U')
        {
            cin>>b;
            for(int i=1;i<=n/a;i++)
            {
                A[i*a]+=b;
            }
        }
        else if(S[0]=='A')
        {
            cout<<A[a]<<endl;
        }

    }
}
