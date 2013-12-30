#include<iostream>
using namespace std;
#include <math.h>
void merge(int*,int*,int,int,int);
void mergesort(int *a, int*b, int low, int high)
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
void merge(int *a, int *b, int low, int pivot, int high)
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
    long long  int A[11];
    int B[105];
    for(int i=1;i<=10;i++)
        A[i]=pow(i,i);
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0,f=0;
        cin>>n;
        int C[n];
        for(int i=0;i<n;i++)
            cin>>B[i];
        mergesort(B,C,0,n-1);
        for(int i=n-1;i>=0;i--)
        {
            for(int j=10;j>0;j--)
            {
                if(A[j]<=B[i])
                {
                        if(A[j]==B[i])
                        {
                            f++;
                            B[i]=B[i]%A[j];
                            break;
                        }
                        else if(A[j]<B[i])
                        {
                            while(B[i]!=0)
                            {
                            ans=B[i]/A[j];
                            if(ans%2==0)
                                f+=2;
                            else f+=1;
                            B[i]=B[i]%A[j];
                            }
                        }
                }
                else continue;

            }
        }
        if(f%2==1)
            cout<<"Little Chef"<<endl;
        else cout<<"Head Chef"<<endl;
    }
}
