#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n;
    char A[100][100],B[100][100],C[100][100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            if(i==0)
               {
                cin>>A[n-1]>>B[i];
                gets(C[i]);
                }
            else
            {
                cin>>A[i-1]>>B[i];
                gets(C[i]);
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                cout<<"Begin ";
                cout<<B[i];
                puts(C[i]);
            }
            else if(A[i][0]=='R')
            {
                cout<<"Left ";
                cout<<B[i];
                puts(C[i]);
            }
            else if(A[i][0]=='L')
            {
                cout<<"Right ";
                cout<<B[i];
                puts(C[i]);
            }
        }
    }
}
