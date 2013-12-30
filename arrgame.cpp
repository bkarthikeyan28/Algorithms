#include<iostream>
#include<stdio.h>
using namespace std;
void merge(long long int*,long long int*,long long int,long long int,long long int);
void mergesort(long long int *a,long long int*b,long long int low,long long int high)
{
    int pivot;
    if(low<high)
    {
        pivot=(low+high)/2;
        mergesort(a,b,low,pivot);
        mergesort(a,b,pivot+1,high);
        merge(a,b,low,pivot,high);
    }
}
void merge(long long int *a,long long int *b,long long  int low,long long int pivot,long long int high)
{
    int h,i,j,k;
    h=low;
    i=low;
    j=pivot+1;

    while((h<=pivot)&&(j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>pivot)
    {
        for(k=j; k<=high; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h; k<=pivot; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=low; k<=high; k++) a[k]=b[k];
}
int main()
{
    long long int t,C[10006],A[10006],B[10006];
    cin>>t;
    while(t--)
    {
        long long int n,ans=0,a1=0,a2=0,a3=0,a4=0,b1=0,b2=0,b3=0,b4=0,pos1=-1,pos2=-1,index,ans1=0,ans2=0,ans3=0,ans4=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>A[i];
        for(int i=0;i<n;i++)
            cin>>B[i];
        mergesort(A,C,0,n-1);
        mergesort(B,C,0,n-1);
        for(int i=0;i<n;i++)
        {
            if(A[i]==1)
                {a1++;pos1=i;}
            else if(A[i]==2)
                {a2++;pos1=i;}
            else if(A[i]==3)
                {a3++;pos1=i;}
            else if(A[i]==4)
                {a4++;pos1=i;}
            else if(A[i]>4)
                break;

        }
         for(int i=0;i<n;i++)
        {
            if(B[i]==1)
                {b1++;pos2=i;}
            else if(B[i]==2)
                {b2++;pos2=i;}
            else if(B[i]==3)
                {b3++;pos2=i;}
            else if(B[i]==4)
                {b4++;pos2=i;}
            else if(B[i]>4)
                break;

        }
        index=pos2+1;
        for(int i=pos1+1;i<n;i++)
        {
                for(int j=index;j<n;j++)
                {
                    if(B[j]>A[i])
                    {
                        //index=j;
                        ans=ans+n-j;
                        break;
                    }
                }
        }
        //cout<<ans<<endl;
        if(a2>0)
            {
                for(int i=0;i<n;i++)
                {
                    if(B[i]>4)
                        ans2+=1;
                }
                ans2=ans2+b1;
                ans2*=a2;
            }
            //cout<<ans2<<endl;

        if(a3>0)
            {
                for(int i=0;i<n;i++)
                {
                    if(B[i]>4)
                        ans3+=1;
                }
            ans3=ans3+b1+b2+b4;
            ans3*=a3;
            }
            //cout<<ans3<<endl;
        if(a4>0)
            {
                for(int i=0;i<n;i++)
                    if(B[i]>4)
                        ans4+=1;
            ans4=ans4+b1;
            ans4*=a4;
            }
            //cout<<ans4<<endl;
            ans=ans1+ans2+ans3+ans4+ans;
            ans=ans+(n-pos1-1)*b1;
            //cout<<ans<<endl;
        double x=ans*(1.0)/n;
        printf("%0.6f",x);
        cout<<endl;

    }
}
