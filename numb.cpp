#include<iostream>
using namespace std;
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
    int t,ans,A[10000],B[10000],C[10000],D[10000],E[10000];
    cin>>t;
    while(t--)
    {

        int n,q,ans=0;
        cin>>n>>q;
        for(int i=1;i<=n;i++)
        {
            D[i]=0;
        }
        for(int i=1;i<=n;i++)
            cin>>A[i];
        for(int i=1;i<=q;i++)
        {
            cin>>B[i]>>C[i];
            for(int j=B[i];j<=C[i];j++)
            {
                D[j]++;
                //cout<<"hi"<<endl;
            }
        }
        //for(int i=0;i<n;i++)
          //  cout<<D[i];
        mergesort(A,E,1,n);
        mergesort(D,E,1,n);
        int i=n;
        while(D[i]!=0)
        {
            ans+=D[i]*A[i];
            i--;
        }
        cout<<ans<<endl;
    }
}

