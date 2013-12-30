#include<iostream>
using namespace std;
int main()
{
    int t,A[1000005],j=0,B1[1000005],k1=0;
    for(int i=0;i<=1000000;i++)
        A[i]=1 ;
    A[0]=0 ;A[1]=0 ;
    for(int i=2;i<=1000000;i++)
    {
    if(A[i]==1)
    {
        j=2*i ;
        while(j<=1000000)
        {
            A[j]=0 ;
            j+=i ;
        }
    }
    }
    for(int i=0;i<=1000000;i++)
    {
        if(A[i]==1)
            {
                cout<<i<<" ";
                B1[k1++]=i;
            }

    }
}
