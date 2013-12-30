#include<iostream>
using namespace std ;
int main()
{
int t ;
int ans[66000][20] ;
int po[16]={2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536} ;
cin>>t ;
while(t--)
{
    int n,a[20],b[20],a1,b1;
    int i,j,k,k1,flag,ct,i1;
    int coun[20] ;
    double sum[66000] ;
    for(i=0;i<66000;i++)
        sum[i]=1.00 ;
    double pro[20],p1 ;
    cin>>n ;
    if(n>=17)
    {
        for(i=0;i<n;i++)
        {cin>>p1>>a1>>b1 ;}
        cout<<0<<"\n" ;
        continue ;
    }
    p1=0.00 ;
    for(i=0;i<n;i++)
    {
        cin>>pro[i]>>a[i]>>b[i] ;
    }
    flag=1;
    i=0 ;
    k=po[n-1] ;
    /*for(i=0;i<k;i++)
        sum[i]=1.00 ;*/
    while(k>1)
    {   k1=k/2 ;
        j=0 ;
        i1=1;
        ct=1 ;
        while(i1<=flag)

       {
           ct=1 ;
           //cout<<ct<<" "<<k1<<endl ;
           while(ct<=k1)
        {   ans[j][i]=a[i] ;
            sum[j]*=pro[i]/100 ;
            j++ ;
            ct++ ;
           // cout<<"def\n" ;
           }
            ct=1 ;
        while(ct<=k1)
        {ans[j][i]=b[i] ;
        sum[j]*=(100-pro[i])/100 ;
        j++ ;
        ct++ ;
        //cout<<"abc\n" ;
        }
        i1++ ;
    }
        i++ ;
        flag*=2;
        k/=2 ;
    }
    k=po[n-1] ;
    /*for(i=0;i<k;i++)
    {
        for(j=0;j<n;j++)
           {cout<<ans[i][j]<<" " ;
            if(j==(n-1))
                cout<<"\n" ;
    }
    }*/
    for(i=0;i<k;i++)
    {     for(k1=1;k1<18;k1++)
            coun[k1]=0 ;
        for(j=0;j<n;j++)
        {
            k1=ans[i][j] ;
            coun[k1]++ ;
        }
        for(k1=1;k1<17;k1++)
        {

            if(coun[k1]>1)
            {
                sum[i]=0.00 ;
                break ;
            }
        }

    }

    /*for(i=0;i<k;i++)
        cout<<sum[i]<<" " ;*/
        for(i=0;i<k;i++)
            p1+=sum[i] ;
        cout<<p1<<"\n" ;

    }
}
