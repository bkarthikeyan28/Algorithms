#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;
long long int  dis(long long int  a,long long int  b,long long int  c,long long int  d)
{
    long long int  power=pow(a-c,2)+pow(b-d,2);
    //cout<<power<<endl;
    return pow(a-c,2)+pow(b-d,2);
}
long long int  min(long long int  a,long long int  b)
{
    if(a<b)
    {
        return a;
    }

    else return b;
}
int  main()
{
    long long int  A[2505],B[2505],ans[2505];
    long long int  t,k;
    cin>>t;
    while(t--)
    {
        long long int  n,index1,index2;
        cin>>n;
        for(long long int  i=0;i<n;i++)
        {
            cin>>A[i]>>B[i];
        }
        cin>>A[n]>>B[n];
        long long int  start=A[n];
        cin>>A[n+1]>>B[n+1];
        long long int  end=A[n+1];
        n+=2;
        for(long long int  i=0;i<n-1;i++)
        {
            for(long long int  j=0;j<n-i-1;j++)
            {
                if(A[j]>A[j+1])
                {
                    A[j]=A[j]+A[j+1];
                    A[j+1]=A[j]-A[j+1];
                    A[j]=A[j]-A[j+1];
                     B[j]=B[j]+B[j+1];
                    B[j+1]=B[j]-B[j+1];
                    B[j]=B[j]-B[j+1];
                }
                /*else if(A[j]==A[j+1])
                {
                    if(B[j]>B[j+1])
                    {
                        B[j]=B[j]+B[j+1];
                    B[j+1]=B[j]-B[j+1];
                    B[j]=B[j]-B[j+1];
                    }
                }*/
            }
        }
        for(long long int  i=0;i<n-1;i++)
        {
            for(long long int  j=0;j<n-i-1;j++)
            {
                if(A[j]==A[j+1])
                {
                    if(abs(B[j])>abs(B[j+1]))
                    {
                        B[j]=B[j]+B[j+1];
                    B[j+1]=B[j]-B[j+1];
                    B[j]=B[j]-B[j+1];
                    }
                }
                /*else if(A[j]==A[j+1])
                {
                    if(B[j]>B[j+1])
                    {
                        B[j]=B[j]+B[j+1];
                    B[j+1]=B[j]-B[j+1];
                    B[j]=B[j]-B[j+1];
                    }
                }*/
            }
        }


        for(long long int  i=0;i<n;i++)
        {
            //cout<<A[i]<<" "<<B[i];
            //cout<<endl;
            if(A[i]==start)
                index1=i;
            if(A[i]==end)
                index2=i;
        }
        //cout<<index1<<" "<<index2<<endl;
        for(long long int  i=index1;i<=index2;i++)
            ans[i]=0;
        for(long long int  i=index1+1;i<=index2;i++)
        {
            ans[i]=ans[i-1]+dis(A[i],B[i],A[i-1],B[i-1]);
            for(long long int j=index1;j<=i;j++)
              {
                   k=ans[i-j]+dis(A[i],B[i],A[i-j],B[i-j]);
                   if(k<ans[i])
                        ans[i]=k;
              //ans[i]=min((dis(A[i],B[i],A[i-j],B[i-j])+ans[i-j]),dis(A[i],B[i],A[index1],B[index1]));
              }

            //cout<<ans[i]<<endl;
        }
        cout<<ans[index2]<<endl;

    }
}
