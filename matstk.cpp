#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,A[1000],B[1000],C[1000],D[1000],diffx,reml,count[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        count[i]=1;
    for(int i=0;i<n;i++)
        {
            cin>>A[i]>>B[i];
            C[i]=A[i];D[i]=B[i];
        }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                temp=B[j];
                B[j]=B[j+1];
                B[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        int initx=A[i],initl=B[i];
        for(int j=i+1;j<n;j++)
        {
            diffx=A[j]-initx;reml=initl-diffx;
            if(reml>0&&reml>B[j])
            {
                count[i]++;//cout<<"hi"<<endl;
            }
            else if(reml>0&&reml<B[j])
            {
                count[i]++;
                initx=A[j];
                initl=B[j];
                //cout<<"hi1"<<endl;
            }
            else if(reml<0)
            {
                initx=A[j+1];
                initl=B[j+1];
                //cout<<"hi2"<<endl;
            }
        }
    }
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(C[i]==A[j])
                {
                    cout<<count[j]<<" ";
                    break;
                }
            }
        }
        cout<<endl;
    }
}
